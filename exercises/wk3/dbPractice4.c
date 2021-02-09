// Program to calculate the power of given equation - > x^n
// example - 2^10 -> 1024
// Number of errors/bugs = 13

//TODO: Fix the bugs and make sure the program runs as expected.
//Provide a brief comment identifying each bug fixed.

#include<stdio.h>

double my_power(int x, int n); //needs to be a double
double return_value_function; //made this a double
int main(void) //int main void
{
  int x = 2; //int x
  int n = 10; //int n
		
  return_value_function = my_power(x, n); //made it = to my_power(x, n)
  printf("The power value of %d ^ %d is : %.2lf \n", x,n,return_value_function); //%s to %d because it is an int and %lf because it is a float or double. 
  return 0; //return 0
}

double ans = 1.0; //set ans = 1.0
//the return value of your func should be x^n result
double my_power(int x, int n) { //parameters are int x and int n for the base and exponent
  ans = x; 
 if(n == 0) //n ==0
      return 1.0; //return 1.0
    if(n == 1) // n ==0
        return n; 
    int m = n > 0 ? n : -n; //flipped n>0 and the ? :
    int cur = 1.0; //set cur to 1.0
    while(cur < m) { //cur < m
      ans *= x; //added ans *= x;
      cur += 1; //added cur += 1;
    }
  
    return n > 0 ? ans : 1.0/ans; //flipped the ? and the : and made n < 0
}

