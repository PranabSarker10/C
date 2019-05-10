///PRIME NUMBER: A Prime number is one with exactly two positive divisors, itself and one.
#include<stdio.h>
int main()
{
    int i,n=1,a=19;
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
            prime("NOT PRIME");
        }
    return 0;`
}
