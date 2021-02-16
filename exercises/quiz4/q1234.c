//tracy miles
//2/15/21

//Question 1
//what is the range of signed and unsigned decimal numbers that can be represented by:

//a. 16-bit binary number
//0-65535 is the range for unsigned
//-32768-32767 for signed numbers

//b. 8-bit binary number
//0-255 is the range for unsigned
//-128-127 is the range for signed numbers

//Question 2
//Assuming we use 8-bits to represent the numbers, what is 2's complement representation of

//a. -18
// first we need to convert 18 to binary = 00010010 and then we need to invert that making it 11101101
//after that we will add 1 to it making it 11101110

//b. -50
//first we need to convert 50 to binary = 00110010 and then we need to inver that making it 11001101
//after that we will add 1 to it making it 11001110


//Question 3

//a. 100 decimal to binary, hexadecimal and octal
//100 to binary is 01100100

// 100 to hexadecimal
// 100/16 = 6r4
// 6/16 = 0r6
// Hexadecimal = 0x64

// 100 to octal
// 100/8 = 12r4
// 12/8 = 1r4
// 1/8 = 0r1
// Octal = 0o144


//b. 12A hex to binary, decimal and hex
//12A to binary 1 = 0001 2 = 0010 A = 1010
//Binary = 100101010
// 1 * 16^2 = 256
// 2 * 16^1 = 32
//(A = 10) * 16^0 = 10
// 256 + 32 + 10 = 298
// Decimal = 0x298


//Question 4

//a. Binary Numbers: A = 00011100, B = 01111111. Perform A+B, B-A, A*B
// if it is 1 + 1 it equals 0 if it is 1 + 1 + 1 it equals 1 if it is 1+0 it equals 1
//A+B
//   00011100
// + 01111111
//   --------
// = 00011011

//B-A
//   01111111
// - 00011100
//   --------
//   01100011

//A*B
//   00011100
// * 01111111
//   --------
//   0110111100100


//b. Octal Numbers: A=1752, B=10001, Perform A+B, B-A, A*B

//A+B  //these can simply be added together
//    1752
// + 10001
//   -----
//   11753

//B-A 
//   10001  //(1 * 8^4) + (0 * 8^3) + (0 * 8^2) + (0 * 8^1) + (1 * 8^0)
// -  1752  //(1 * 8^3) + (7 * 8^2) + (5 * 8^1) + (2 * 8^0)
//   -----
// =  6072

//A*B //multiplied normally will result in 17521752
//    1752
// * 10001
//   -----
// = 17521752

//c. Hexadecimal numbers A=100A1, B=B1100

//A+B
//   100A1
// + B1100
//   ----- b is equivalant to 2 so 2 + 1 = 3 which equals C. The others drop down
// = C11A1


//B-A
//   B1100
// - 100A1
//   -----
// = A105F


//if number is 10-A 11-B 12-C 13-D 14-E 15-F
//A*B 
//   100A1
// * B1100
//   -----
// = B17F5B100

#include <stdio.h>

int main(void)
{
  int i; //this is for decimal to binary
  int q3a = 100; //the decimal for question 3a
  int q3b = 0x12A; //the hex for question 3b
  int q3[25]; //print binary
  int q3bb[9] = {1, 0, 0, 1, 0, 1, 0, 1, 0}; //binary
  int q3cnum = 0701; //oct
  int q3cbin[9] = {1, 1, 1, 0, 0, 0, 0, 0, 1};
  int q4add[8] = {1, 0, 0, 1, 1, 0, 1, 1}; //add binary
  int q4sub[7] = {1, 1, 0, 0, 0, 1, 1};
  int q4mult[12] = {1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0};
  int q4aoctal = 01754; //octal a
  int q4boctal = 010001; //octal b
  int q4ahex = 0x100A1;
  int q4bhex = 0xB1100;

  //question 3a binary
  for (i = 0; q3a > 0; ++i) {
    q3[i] = q3a % 2;
    q3a/=2;
  }
  for(i-=1; i>= 0; --i) {
    printf("%d", q3[i]);
  } 
  printf("\n");
  q3a = 100;
  //hex convert
  printf("0x%x\n", q3a);

  //question 3a octal convert
  printf("o%o\n", q3a);

  //question 3b binary
  for(i=0; i<9; i++) {
    printf("%d", q3bb[i]);
  }
  printf("\n");

  //question 3b decimal
  printf("%d\n", q3b);

  //question 3b octal
  printf("o%o\n", q3b);

  //question 3c binary
  for (i=0; i<9; i++) {
    printf("%d", q3cbin[i]);
  }
  printf("\n");

  //question 3c decimal
  printf("%d\n", q3cnum);

  //question 3c hex
  printf("0x%x\n", q3cnum);

  //question 4a
  for (i=0; i< 8; i++){
    printf("%d", q4add[i]);
  }
  printf("\n");
  for(i=0; i < 7; i++) {
    printf("%d", q4sub[i]);
  }
  printf("\n");
  for(i=0; i < 12; i++) {
    printf("%d", q4mult[i]);
  }
  printf("\n");

  //question 4b
  printf("o%o\n", q4aoctal + q4boctal);
  printf("o%o\n", q4boctal - q4aoctal);
  printf("o%o\n", q4aoctal * q4boctal);

  //question 4c
  printf("0x%x\n", q4ahex + q4bhex);
  printf("0x%x\n", q4bhex - q4ahex);
  printf("0x%x\n", q4ahex * q4bhex);


  return 0; //return 0
} 
