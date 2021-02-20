//tracy miles
//02/19/2021

#include <stdio.h>
#include <math.h>

int is_prime(int n); //defining functions
int is_fib_prime(); //defining functions

int main() {
  is_fib_prime(15); //calling it in the main
  return 0;
}
//checking for a prime number here
int is_prime(int n) {
  int i;
  int bo = 1;
  for(i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      bo = 0;
      break;
    }

}
  if (n <= 1)
    bo = 0;
  if (bo == 1) {
    return 1;
  } else {
    return 0;
  }
}

//to get the fib sequence
int is_fib_prime(int n) {

  int i;
  int fib1 = 0;
  int fib2 = 1;
  int fib; 
  int count;

  if(n == 0) {
    return fib1;
  }

  for(i = 2; i <= n; i++) {
    count = fib1 + fib2;
    fib1 = fib2;
    fib2 = count;
  }
  for(fib = 11; fib <= n; fib++) {
    if(is_prime(fib) == 1) {
      printf("n = %d is prime\n", fib);
      } else {
      printf("n = %d is not prime\n", fib); 
    }
}
  return 0;
}
