///Function( extern variable , static variable)
///Remember: We can declare a global variable anywhere without in a function.
#include<stdio.h>

int add(int a,int b)
{
    extern int c;///Here giving value of c is not possible.
///extern is used to call the global variable which is declared before.
    c = a+b;///Here we can give value.

    return a+b;
}



int n=0;
int count()
{
    n++;
    return n;
}




int increment()
{
    static int s = 11;///Here static means after excuting one-times this line will not be executed again.
///Characteristics of static variable: The life-time of static variable will not be finished until the program will not be finished.
    s--;
    return s;
}
///Scope is the ending part(Here brace or 2nd bracket) in whom variable is activated.


///LIFE-TIME OF SOME FUNCTION:
/**
Local variable :Until the specific function is finished.(Short life-time).
Global variable:Until the program is finished.
Static variable:Until the program is finished.
*/

int c;
int main()
{
    printf("%d\n",c);
    add(5,6);
    printf("%d\n",c);

    printf("%d\n",count());
    printf("%d\n",count());
    printf("%d\n",count());
    printf("%d\n",count());

    printf("%d\n",increment());
    printf("%d\n",increment());
    printf("%d\n",increment());
    printf("%d\n",increment());
    printf("%d\n",increment());
    printf("%d\n",increment());
    return 0;
}
