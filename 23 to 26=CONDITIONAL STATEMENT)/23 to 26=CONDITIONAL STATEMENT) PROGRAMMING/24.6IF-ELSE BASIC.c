//If-else basic
#include<stdio.h>
int main()
{
    int a=1;

    if(--a)
    {
        printf("%d\n",a);//Here (--a) statement means 'a' becomes '0' and then the statement becomes false. So nothing is printed as else statement is not present here.
    }

     return 0;
}



