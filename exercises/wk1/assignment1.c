/*                                                                           
 * Basic C program to print text and loop numbers                            
 * Author: Tracy Miles                                                         
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
  int i;
  int n;

  printf("\"*****{Welcome to C291 Spring 2021 @ IU}, %%% Golden Rule: Start working on everything as early as possible %%% Thanks *****\"\n");
  for(i = 100; i < 101; i--){
    if((i % 2) == 0){
      printf("%04d ", i);
      for (n = 0; n < 5; n++) {
        printf(".");
        fflush(stdout);
        sleep(1);
      }
      printf("\n");
    } else {
      printf("%04d\n", i);
    }
  }
  return(0);
}
