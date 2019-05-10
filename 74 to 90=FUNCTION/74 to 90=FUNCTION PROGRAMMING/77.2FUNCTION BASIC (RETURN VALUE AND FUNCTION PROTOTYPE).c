///Function BASIC ( Return_Value & function prototype)
#include<stdio.h>
int abs(int a,int b);
int add(int a,int b);
///';' <= This indicates that they are declared in function prototype. And we can find them in the program.

int main()
{
    printf("%d\n",abs(5,-6));
    printf("%d\n",abs(5,6));
    return 0;
}

int abs(int a,int b)
{
    int ad = add(a,b);
    if(ad<0)
        return -ad;
    else
        return ad;
}

int add (int a, int b)
{
    return a+b;
}

