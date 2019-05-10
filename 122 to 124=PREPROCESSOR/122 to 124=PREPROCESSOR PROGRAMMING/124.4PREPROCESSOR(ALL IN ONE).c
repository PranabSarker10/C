///Preprocessor (all in one)

///#if #else #elif #endif ///These are used for checking condition.
///#ifdef #ifndef #undef ///These are used for defining condition.
///##

///These preprocessors are used to work fast.
#include<stdio.h>

#define PI(a,b) a##b ///## is used to connect two or more variables into one.
int main()
{
    int xy = 5;
    printf("%d",PI(x,y)); ///We can't do it in another way. But using ## we can do it.

    return 0;
}
