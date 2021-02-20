//tracy miles
//02/18/2021

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
  long int cal[10000]; //array
  int i, j;//initilizing variables
  int c = 0; 
    float m = 0; //matches
  float n = 15; //number of people
  float probability; //probability
  int trial = 10000; //number of trials performed
  bool x = false; //boolean set to false

  srand((unsigned int)time(NULL)); //define the rand

  while(c < trial) {

    for(i = 0; i < n; ++i) {
      cal[i] = rand() % 365 + 1; //randomize the calender days
    }
    for(i = 0; i < n - 1; ++i) {
      for(j = i + 1; j < n; ++j) {
	if(cal[i] == cal[j]) {
	  x = true;
	  break;
	}
      }
    }
    if(x == true)
      m++; //if true match adds 1
    c++;
    x = false;
  }
  probability = (m / trial); //match divided by trial is the probability
  printf("There were %d trials. The simulated probability is: %f\n", trial, probability);

  return 0; //returning 0
} 
