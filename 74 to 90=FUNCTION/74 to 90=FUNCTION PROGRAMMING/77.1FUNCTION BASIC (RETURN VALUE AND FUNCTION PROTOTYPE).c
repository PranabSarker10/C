///Function Basic(Return_Value & function prototype)

#include<stdio.h>///printf function is declared.

int add(int a, int b)///add function is declared.
{
    return a+b;///This is return value(5+6=11).Return_value represents the value of the function.
}

int main()
{
///Function prototype means the functions that I have called in the main function.
///Here two functions are called. They are printf(declared in header file) & add(declared in int add).

    printf("%d\n",add(5,6));
    return 0;
}
///REMEMBER: We can return one thing from a function.
