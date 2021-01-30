// Program to use pass by value and pass by reference.
// check if the final return value of your program is a palindrome



#include<stdio.h>
#include<stdbool.h>
int fun1();
int fun2(int y);
int fun3(int *x);
bool func4(int x);

void main() {
        int return_value_function = 0;                


        return_value_function = fun1();
        printf("return_value_function = %d \n", return_value_function);

                return_value_function = fun2(return_value_function);
        printf("return_value_function = %d \n ", return_value_function);

                return_value_function = fun3(&return_value_function);
        printf("return_value_function = %d \n", return_value_function);


        return_value_function = func4(return_value_function);
        if (return_value_function){
                printf("It is a palindrome \n");
        }
        else{
               printf("It is not a palindrome \n");
        }       

}


int fun1() 
{
        return 100;
}
int fun2(int return_value_function) 
{
        return_value_function = 900 + return_value_function ;
        return return_value_function;
}

int fun3(int *pass_by_reference) 
{
        *pass_by_reference = *pass_by_reference + 9001;
        return *pass_by_reference;
}

//write function to find palindrome of the given number
bool func4(int n)
{
                
}

