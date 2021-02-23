// Fig. 5.16: fig05_16.c
// Scoping.

//Todo: Modify the code to print memory addresses of all variables/array elements and
//explain the impact of "static" keyword. Also use an extern variable and discuss how
//it impacts the memory address. Why?

//using static in front of the variable or a function is to hide it or block it from being used in other files. Extern impacts the memory address of the global variable and changes it. This is because it is unaffected by scopes and is always available. A memory address is the address where the data is stored. The extern variable is changing the location of the data.

#include <stdio.h>

void useLocal(void); // function prototype
void useStaticLocal(void); // function prototype
void useGlobal(void); // function prototype

extern int x = 1; // global variable

int main(void)
{
  int x = 5; // local variable to main

   printf("local x in outer scope of main is %d the memory address of x is: %p\n", x);

   { // start new scope                                     
      int x = 7; // local variable to new scope               
                                                                  
      printf("local x in inner scope of main is %d memory address is: %p\n", x);     
   } // end new scope                                          

   printf("local x in outer scope of main is %d memory address is: %p\n", x);

   useLocal(); // useLocal has automatic local x
   useStaticLocal(); // useStaticLocal has static local x
   useGlobal(); // useGlobal uses global x
   useLocal(); // useLocal reinitializes automatic local x
   useStaticLocal(); // static local x retains its prior value
   useGlobal(); // global x also retains its value

   printf("\nlocal x in main is %d memory address is: %p\n", x);
} 

// useLocal reinitializes local variable x during each call
void useLocal(void)
{
   int x = 25; // initialized each time useLocal is called

   printf("\nlocal x in useLocal is %d after entering useLocal the memory address of x is: %p\n", x);
   ++x;
   printf("local x in useLocal is %d before exiting useLocal memory address is: %p\n", x);
} 

// useStaticLocal initializes static local variable x only the first time 
// the function is called; value of x is saved between calls to this
// function
void useStaticLocal(void)
{
   // initialized once 
   static int x = 50;                        

   printf("\nlocal static x is %d on entering useStaticLocal the memory address of x is: %p\n", x);
   ++x;
   printf("local static x is %d on exiting useStaticLocal the memory value of x is: %p\n", x);
}

// function useGlobal modifies global variable x during each call
void useGlobal(void)
{
   printf("\nglobal x is %d on entering useGlobal memory address of x: %p\n", x);
   x *= 10;
   printf("global x is %d on exiting useGlobal the memory value of x is: %p\n", x);
}

