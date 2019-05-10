///Preprocessor (all in one)

///#if #else #elif #endif ///These are used for checking condition.
///#ifdef #ifndef #undef ///These are used for defining condition.
///##
#include<stdio.h>

#define PI 3.1416
int main()
{
/**
#ifdef = It works when the wanted value is defined.
#ifndef = It works when the wanted value is not defined.
#undef = It works to undefine a defined.
**/
    #ifdef PI
    #undef PI

    #endif // PI
       int PI = 5;
       printf("%d",PI);///PI = 3.1416 was defined. But by using #undef we undefined it. So newly PI = 5 is printed.
    return 0;
}
