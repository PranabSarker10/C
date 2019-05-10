///PRIME NUMBER: A Prime number is one with exactly two positive divisors, itself and one.
#include<stdio.h>
int main()
{
    int a=21,n=0,i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            n=0;
        }
    }
    if(n==1)
    {
        printf("PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }

    return 0;
}
