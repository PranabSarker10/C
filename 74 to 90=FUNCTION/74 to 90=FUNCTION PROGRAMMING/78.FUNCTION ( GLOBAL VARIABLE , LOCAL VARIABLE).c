///Function (Global variable , local variable)
///Global variable = Works in the whole program. We can call a global variable from any function of a progarm.
///Local variable  = Works in the specific part of a program. But we can call the local variable from the specific function.

///One Pranab is familliar in the whole faculty, anther pranab is familliar in his class.
///If we called pranab in the spicific class everyone will tell about the 2nd Pranab but if we called Pranab everyone will tell about the most familliar Pranab.
#include<stdio.h>

int res,c;///This are global variable as declared before.

int add(int a,int b)
{
    int res;
    res = a+b;
    c = b;///In this function c is not declared before so we have taken it from the global variable.

    return res;
}

int abs (int a)
{
    int res;
    res = a<0 ? -a:a;
    c = a;

    return res;
}

///Here add & abs are two separate function so using res in both function is not a fault.

int main()
{
    printf("%d %d\n",res,c);///Here remember if we declare a global variable it will be 0 by default.
    add(5,6);
    printf("%d %d\n",res,c);

    return 0;
}

///We can use global variable in those functions where local variable is not present.

