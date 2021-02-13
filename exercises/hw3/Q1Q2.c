//Tracy Miles
//02/11/2021



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
  //a 
 int a = 100100;
  printf("left justified output:\n%-12u", a);
  //b
  double b = 7.350;
  printf("\n%08.3f\n", b);
  //c
  int c = 300;
  printf("signed: %+d unsigned: %u\n", c,c);
  //d
  printf("%u\n", -300);
  //e
  int e;
  printf("enter hex number: ");
  scanf("%x", &e);
  printf("hex value: %x, decimal number: %d\n", e,e);
  //f
  int oct;
  printf("enter an octal value: ");
  scanf("%o", &oct);
  printf("octal value:%o\n", oct); 
  //g
  int g = 100;
  printf("hex: 0x%x\n", g);
  //h
  int h = 100;
  printf("100 in octal form: 0%o\n", h);
  //i
  char str1[100];                                                                                                 
  printf("enter characters: ");                                                                                     
  scanf("%[^z]s", &str1); 
  printf("Entered string is: %s\n", str1);
   
  //j                                                                                                            
  int hr, min, second;                                                               
  printf("enter a time (hh-mm-ss): ");                                                                        
  scanf("%d%*c%d%*c%d", &hr, &min, &second);
  printf("hour: %d minute: %d second: %d\n", hr, min, second);
  
  //k
  int hr1, min1, second1;
  printf("enter a time (hh:mm:ss): ");
  scanf("%d:%d:%d", &hr1, &min1, &second1);
  printf("hour: %d minute: %d second: %d\n", hr1, min1, second1);
  //l

  char str[50];
  scanf("%s", str);
  char *ptr = str;
  ptr++;
  ptr[strlen(ptr)-1] = '\0';
  for(;*ptr!='\0';ptr++)
    printf("%c",*ptr);

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
