//tracy miles
//03/11/2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int response();
int main(void) {
  char* topicsarr[] = {"Racial Injustice", "Income Gap", "Gun Violence", "Equality", "Immigration", "Capital Punishment", "Abortion"};
  int rating, total;
  double avg;
  int rows = 7, cols = 10, i, x;
  int responsearr[rows][column];
  int pointsmin = 10000, pointsmax = -10000, pointsminIndex = -1, pointsmaxIndex = -1;
  for(i = 0; i < column; i++) {
    printf("person #%d:\n", (i + 1));
    printf("rate each issue 1 - 10\n");
    for(x = 0; x < rows; x++) {
      printf("%s:", *(topicsarr + x));
      *(*(responsearr + x) + i) = response();
    }
  }
  printf("\n");
  for(i = 0; i < rows; i++) {

    printf("%20s\t", *(topicsarr + i));
    total = 0;
    for(x = 0; x < column; x++){ 
      printf("%d ", *(*(responsearr + i) + x));  
      total += *(*(responsearr + i) + x));
  } 
  
  avg = ((double) total) / column;
  printf("\taverage: %.2f\n", avg);
  if(total < pointsmin){
    pointsmin = total;
    pointsminIndex = i;
  }
  if(total > pointsmax){
    pointsmax = total;
    pointsmaxIndex = i;
  }
}
printf("\nMax points polled for:\t%s:\t%d points\n", *(topicsarr + (pointsmaxIndex - 1)), pointsmax);
printf("\nMin points polled for:\t%s:\t%d points\n", *(topicsarr + (pointsminIndex - 1)), pointsmin);
printf("\n%d people responded\n", *(*(responsearr + 0) + column));

return 0;
  }

int response() {
  int rating;
  while(1) {
    scanf("%d", &rating);
    if(rating < 0 || rating > 10) {
      printf("Please choice a rating between 1-10\n");
      printf("Enter Again");
      continue;
    } else 
       break;
  }
   return rating;
  }
