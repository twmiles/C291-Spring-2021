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
//tracy miles
//03/01/2021 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sel(int k, int a, int b, int randarr[]) {
  int p = rand() % b;
int n1 = 0, n2 = 0, n3 = 0, i;

for(i = 0; i < 50; i++){
  if(i < p) {
      n1++;
    } else if(i == p) {
      n2++;    
    } else if(i > p) {
      n3++;    
    }
}
  if(k < n1) {
    return sel(k, 0, n1, randarr[i]);
  } else if(k > (n1 + n2)){
    return sel(k, (n1 + n2), n3, randarr[i]);
  } else{
    printf("\nThe median is: %d", p);
  }  
  }

int main(void)
{
  int n = 30; 
  srand((unsigned int)time(NULL));
  printf("Enter number of elements: ");
  scanf(" %d", &n);
  int randMedian[n], i;
  for(i = 0; i < n; i++){
    randMedian[i] = rand() % 100;
  }	
  printf("unsorted array: \n");
  for(i = 0; i < n; i++){
    printf("%d\t", randMedian[i]);  
}       
  int k = n/2;
  int a = 0;
  int b = n;
  sel(k, a, b, randMedian[n]);
	
 return 0;
}


