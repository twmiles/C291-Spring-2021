//tracy miles
//04/09/21

#include <stdio.h>

int sum(int x, int y);
int subtract(int x, int y);
int mult(int x, int y);
int divide(int x, int y);
int remain(int x, int y);
int power(int x, int y);
int (*ptr[6]) (int a, int b);

int main() {
  int num1, num2;
  int answer;
  char operator;

  ptr[0] = sum;
  ptr[1] = subtract;
  ptr[2] = mult;
  ptr[3] = divide;
  ptr[4] = remain;
  ptr[5] = power;

  printf("Please enter two values: \n");
  scanf(" %d %d", &num1, &num2);

  printf("Enter the operating symbol you want: \n");
  scanf(" %c", &operator);

  switch(operator) {
  case '+' :
    answer = (*ptr[0]) (num1, num2);
    break;
  case '-' :
    answer = (*ptr[1]) (num1, num2);
    break;
  case '*' :
    answer = (*ptr[2]) (num1, num2);
    break;
  case '/' :
    answer = (*ptr[3]) (num1, num2);
    break;
  case '%' :
    answer = (*ptr[4]) (num1, num2);
    break;
  case '^' :
    answer = (*ptr[5]) (num1, num2);
    break;
  default :
    printf("invalid operation\n");
  }
  printf("Answer is: %d\n", answer);

  return 0;
}

int sum (int x, int y) {
  return x + y;
}

int subtract (int x, int y) {
  return x - y;
}

int mult (int x, int y) {
  return x * y;
}

int divide (int x, int y) {
  return x / y;
}

int remain (int x, int y) {
  return x % y;
}

int power (int x, int y) {
  int an = 1;

  for (y; y > 0; y--) {
    an *= x;
  }
  return an;
}
