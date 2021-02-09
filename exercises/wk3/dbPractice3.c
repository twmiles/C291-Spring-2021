// Program to check if the given number is a palindrome
// Number of errors/bugs = 15

//TODO: Fix the bugs and make sure the program runs as expected.
//Provide a brief comment identifying each bug fixed.

#include<stdio.h>
int return_value_function = 1001; //made this global
int func(int); //1 changed both to int //5 removed the x                                                                                                                                                                                     

int main(void) { //2 changed to int and added void                                                                                                                                                                                            
   //4 changed to int                                                                                                                                                                                       
  int fun; //simplify the function                                                                                                                                                                                                            

  fun = func(return_value_function);  //3 removed the 4                                                                                                                                                                                       
  if(fun == 1){
    printf("It is a palindrome \n"); //it is a 
  }
  else{
    printf("It is not a palindrome \n"); //it is not a
  }

  return 0; //added a semicolon
    }


//the return value of your func should be true / false only                                                                                                                                                                                   
int func(int n) //took out char //changed to int
{
  int remainder;
  char true = 1; //created variable for true to equal 1
  char false = 0; //created variable for false to equal 0
  int temp = 0; //created variable
  while (n != 0) { //changed to !=
    remainder = n % 10; //to get the remainder
    temp = temp * 10 + remainder;
    n /= 10; // changed to /=
  }  

  if (return_value_function == temp)
    {
      return true; //returns true
    }
  else
    {
      return false; //returns false
    }
}

