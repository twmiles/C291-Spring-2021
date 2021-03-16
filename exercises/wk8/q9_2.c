//This program uses a function called CharacterScan to read a char from the user
//The function must take an int pointer as a parameter
//The program should print the char and ascii code for each character the user enters
//The program should only exit whe nthe user enters escape
//tracy miles
//03/15/21
#include <stdio.h>
#include <stdlib.h>
char CharacterScan(int*);

int main(void){
    int* iPtr;
    char exit;
    char acode;
    while(1){ //this was changed to (1)
        char c = CharacterScan(&iPtr);
        acode = iPtr; //changed to a code also took away the *
        if(acode == 27){ //changed to acode and changed != to == this is escape ascii code
            printf("Exiting the code!\n");
            break;
        }
        else{
	  printf("%c is ASCII code %d.\n", c, acode); //changed to acode and deleted the *
        }
    }
}

char CharacterScan(int* iPtr){
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c); //changed to semicolon
    int a = (char) c; //(double) was changed to (char)
    *iPtr = a; //deleted the *
    return c;
}
