// The factorial of an integer is the product of the number with all
// the positive integers below it.

// For example: Factorial of 5 = 5 * 4 * 3 * 2 * 1 = 120

// Number of errors/bugs = 7

//TODO: Fix the bugs and make sure the program runs as expected.
//Provide a brief comment identifying each bug fixed.



#include<stdio.h>

int factorial(float number); //needs to be float

int main(void) { //int main(void)
  int n, fact;
  printf("Debugging Practice 1 - Quiz 3, Q3\n\n");
  printf("Please enter the number whose factorial you wish to find: ");
  scanf(" %d", &n); //add pointer
  fact = factorial(n); //set fact to equal the function
  printf("The factorial of %d is %llu\n", n, fact);

  return 0; //add a return 0
}


int factorial(float number) {
  if(number <=1) //number <= 1
      return 1; //change to return 1
    return number * factorial(number-1); //changed to number - 1
}

