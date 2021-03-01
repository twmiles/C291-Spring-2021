// Quiz6.c 
// median of a sequence
/*
TODO:
The median m of a sequence of n elements is the element that would fall in the middle if the sequence was sorted. 
That is, e <= m for half the elements, and m <= e for the others. Clearly, one can obtain the median by sorting 
the sequence, but one can do quite a bit better with the following algorithm that finds the kth element of a
sequence between a (inclusive) and b (exclusive). (For the median, use k = n / 2, a = 0, and b = n.)
	select(k, a, b):
	Pick a pivot p in the subsequence between a and b.
	Partition the subsequence elements into three subsequences: the elements <p, =p, >p
	Let n1, n2, n3 be the sizes of each of these subsequences.
	if k < n1
		return select(k, 0, n1).
	else if (k > n1 + n2)
		return select(k, n1 + n2, n).
	else
		return p.

Implement this algorithm and measure how much faster it is for computing the median of a random large sequence, 
when compared to sorting the sequence and taking the middle element. Present your observations.

One way to "measure" the time or compare the performance would be to use any of the techniques mentione at 
https://fresh2refresh.com/c-programming/c-time-related-functions/
You may use any approach that you are comfortable with.

*/
 
#include <stdio.h>

int main(void)
{
	
	
	
 return 0;
}


