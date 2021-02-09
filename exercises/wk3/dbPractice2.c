// Program to count the input characters. 
// It reads the input from the keyboard until user hits ENTER
// and then prints it on screen.  
// Number of errors/bugs = 13

//TODO: Fix the bugs and make sure the program runs as expected.
//Provide a brief comment identifying each bug fixed.

#include<stdio.h>
int main(void) //changed to int main void
{
  int i = 0; //initilized i to equal zero so that it works in the loop
  char c; //set char to c
  int count = 0; //set count to zero
  for (i=0; c=getchar() != '\n'; i++) //made it so getchar() does not equal '\n' which is enter. I also did i++ instead of ++i
    {
      count++; //count++ not -- because it is suppose to count up
      putchar(c); //putchar is passed to c. not j that doesnt make sense
    }
  printf("\n num of chars including spaces: %d", count); // \n at the front so that it tabs down a line. also changed pointer to %d not %s because it is suppose to return an integer. also remove the : and replace with comma.
  return 0; //return zero in a void. not 1.
}
