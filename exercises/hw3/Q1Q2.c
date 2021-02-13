//Tracy Miles
//02/11/2021



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
  //a  //this is for left justified 
 int a = 100100;
  printf("left justified output:\n%-12u", a);
  //b //Print 7.350 in a 8-digit field with preceding zeros.
  double b = 7.350;
  printf("\n%08.3f\n", b);
  //c //Print 300 with and without a sign.
  int c = 300;
  printf("signed: %+d unsigned: %u\n", c,c);
  //d //Print -300 as unsigned number.
  printf("%u\n", -300);
  //e //Read a hexadecimal value into variable hex.
  int e;
  printf("enter hex number: ");
  scanf("%x", &e);
  printf("hex value: %x, decimal number: %d\n", e,e);
  //f //Read an octal value into variable octal.
  int oct;
  printf("enter an octal value: ");
  scanf("%o", &oct);
  printf("octal value:%o\n", oct); 
  //g //Print 100 in hexadecimal form preceded by 0x.
  int g = 100;
  printf("hex: 0x%x\n", g);
  //h //Print 100 in octal form preceded by 0.
  int h = 100;
  printf("100 in octal form: 0%o\n", h);
  //i //Read characters into array m until the letter z is encountered.
  char str1[100];                                                                                                 
  printf("enter characters: ");                                                                                     
  scanf("%[^z]s", &str1); 
  printf("Entered string is: %s\n", str1);

  //j //Read a time of the form hh-mm-ss, storing the parts of the time in the integer variables hour, minute and second. Skip the dash (-) in the input stream. Use the assignment suppression character.
  int hr, min, second;
  printf("enter a time (hh-mm-ss): ");
  scanf("%d%*c%d%*c%d", &hr, &min, &second);
  printf("hour: %d minute: %d second: %d\n", hr, min, second);
  
  //k //Read a time of the form hh:mm:ss, storing the parts of the time in the integer variables hour, minute and second. Skip the colons (:) in the input stream. Do not use the assignment suppression character.
  int hr1, min1, second1;
  printf("enter a time (hh:mm:ss): ");
  scanf("%d:%d:%d", &hr1, &min1, &second1);
  printf("hour: %d minute: %d second: %d\n", hr1, min1, second1);
  
  //l //Read a string of the form "characters" from the standard input. Store the string in character array s. Eliminate the quotation marks from the input stream.
  char str[50];
  scanf("%s", str);
  char *x = str;
  x++;
  x[strlen(x)-1] = '\0';
  for(;*x!='\0';x++)
    printf("%c",*x);

  printf("\nQUESTION 2\n");

  //i believe that this will print 32100
printf( "%-10d\n", 32100 );

//i believe that this will print "this is a string"
//this printed Q becuase it is using %c.
printf( "%c\n", "This is a string" );

//i believe that this statement will print 7124.922 
printf( "%*.*lf\n", 8, 3, 7124.921654 );

//i believe that this statement will print 021 and 0X11
printf( "%#o\n%#X\n%#e\n", 17, 17, 1008.83619 );

//i believe this statement will print 1000000 and +8000000
printf( "% ld\n%+ld\n", 1000000, 8000000 );

//this statement will print 8.549E+02
printf( "%10.3E\n", 854.93738 );

//this statement will print 265
printf( "%10.3g\n", 264.93738 );

//this statment will print 10. correction it printed 2147483637 because the %d is not a float or double.
printf( "%d\n", 10.937 );




  return 0; //add a return 0    

}
