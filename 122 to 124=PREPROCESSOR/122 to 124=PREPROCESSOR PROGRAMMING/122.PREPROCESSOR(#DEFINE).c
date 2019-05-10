///Preprocessor ( #define )
///define is used to make code fast and also used to make precode.
///The change or process done by the compiler before converting program into binary or computer realizing format is called Preprocessor.
///Editing something before the process of code is called prepocessor. Here the editing part is told before.
#include<stdio.h>
///Procedure: 1)define(at least one space) 2)By which I want define 3) The element which is defined.
#define PI 3.1416///General Macro
#define pf printf
#define pfi(a) printf("%d\n",a);///This Macro is with argument.
#define MAX(a,b) (a>b) ? (a) : (b)
///The next two defines are 1)precaution for error 2)Eradicating error.
#define add(a,b) a+b
#define add_perfect(a,b) (a+b)
int main()
{
    printf("%f\n",PI);
    pf("%f\n",PI);
    pfi(3)///Here semicolon(;) is defined before.
    pfi(MAX(3,5))///This is nested Macro.
///printf("%d\n",MAX(a,b))  which is similar to => printf("%d\n",(3>5) ? (3) : (5))

    pfi(add(4,4)/4)///As we don't use (a+b) in lieu of a+b so OUTPUT works like as: 4+4/4 =>4+(4/4) =>5.
    pfi(add_perfect(4,4)/4)/// As bracket is used properly so OUTPUT works like as: (4+4)/4 =>8/4 =>2.
    return 0;
}
