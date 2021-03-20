//tracy miles
//03/19/21
#include<stdio.h>
#include<stdlib.h>
int main(void) {
//a
//allocate memory
int* tPtr = malloc(sizeof(int));

//b
//allocate memory
double* ttPtr = malloc(2 * sizeof(double));

//c
//allocate memory
int* tttPtr = malloc(5 * sizeof(int));

 *tttPtr = 27;
 *(tttPtr + 1) = 12;
 *(tttPtr + 2) = 93;
 *(tttPtr + 3) = 44;
 *(tttPtr + 4) = 38;
 int i;
 for(i = 0; i <= 5; i++) {
   printf("%d ", *(tttPtr + i));
 }
 printf("\n");
 
 //d
 //allocate memory
 char* xPtr = malloc(20 * sizeof(char));
 //set or initilize the characters
 *xPtr = 'T';
 *(xPtr + 1) = 'r';
 *(xPtr + 2) = 'a';
 *(xPtr + 3) = 'c';
 *(xPtr + 4) = 'y';
 *(xPtr + 5) = 'M';
 *(xPtr + 6) = 'i';
 *(xPtr + 7) = 'l';
 *(xPtr + 8) = 'e';
 *(xPtr + 9) = 's';
 *(xPtr + 10) = 'i';
 *(xPtr + 11) = 's';
 *(xPtr + 12) = 'A';
 *(xPtr + 13) = 'w';
 *(xPtr + 14) = 'e';
 *(xPtr + 15) = 's';
 *(xPtr + 16) = 'o';
 *(xPtr + 17) = 'm';
 *(xPtr + 18) = 'e';
 *(xPtr + 19) = '!';
 
 //print
 for(i = 0; i <= 20; i++) {
   printf("%c ", *(xPtr + i));
 }
 printf("\n");

  
//e
int x;
int k = 5, j = 5;
//allocate memory
char * t_ptr = (char*)malloc(25*sizeof(char));
char ** t_ptr2 = &t_ptr;
for(k=0; k<5; k++) {
  for(j=0; j<5; j++) {
    *(*(t_ptr2+k)+j) = 'A' +j+k;
  }
 }
for(k=0; k<5; k++) {
  for(j=0; j<5; j++) {
    printf("%c ", *(*(t_ptr2+k)+j));
  }
  printf("\n");
 }
free(t_ptr);

//f
int * xarr = (int*)malloc(25 * sizeof(int));

return 0;
}
