//Relational operator
//> >= < <= == !=

/* When a statement becomes true it prints 1.
Again when a statement becomes false it prints 0.*/
#include<stdio.h>
int main()
{

    int a=6, b=7, c;

    c=(a>b);
    printf("%d\n",c);
    c=(a<b);
    printf("%d\n",c);
    c=(a==b);
    printf("%d\n",c);
    c=(a!=b);
    printf("%d\n",c);


    return 0;
}

