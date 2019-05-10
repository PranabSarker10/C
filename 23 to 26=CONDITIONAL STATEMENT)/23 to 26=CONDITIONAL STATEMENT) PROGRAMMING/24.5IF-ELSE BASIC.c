//If-else basic
#include<stdio.h>
int main()
{
    int a=1;

    if(a--)
    {
        printf("%d\n",a);//As (a--) statement is before printf so increment will be noticed before printf. For that reason incremented (a) will be printed.
    }
    printf("%d\n",a++);//Here after printing a=0, increment will be applicable.
    printf("%d\n",a);//Here after printing a=1 will be printed.

     return 0;
}


