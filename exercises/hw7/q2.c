//tracy miles
//03/19/2021

#include <stdio.h>
#include <stdlib.h>

//int main
int main(){
  char *str;
int x = 0;
//allocating memory
str = calloc(sizeof(char), 100);
fgets(str, 100, stdin);
//while loop to check
 while(*(str+x) != '\0') { //until enter
   if(*(str+x) >= 97 && *(str+x) <= 122) { //97 to 122
    *(str+x) = *(str+x) - 32;
  }
   else if(*(str+x) >= 65 && *(str+x) <= 90){ //65 to 90 for uppercase
    *(str+x) = *(str+x) + 32;
 }
x++;
}
 printf("%s", str); //printing string
 return 0; //return 0
}
