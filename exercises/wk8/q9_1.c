//This program should read a string from the user and print it using a character pointer
//The program is setup to use pointer offset notation to get each character of the string
//tracy miles
//03/15/21
#include <stdio.h>
#include <string.h>

void main(void){
    char s[20];
    char *cPtr;
    scanf(" %s", s); //changed %d to %s and also took away the * in front of the s
    cPtr = s; 
    while(*cPtr != '\0'){ //changed the -- to a * for the pointer and also change the == to != enter
      printf("%c", *(cPtr++)); //changed the % to a %c 
    }
  printf("\n");
}
