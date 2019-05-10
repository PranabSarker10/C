///PRIME NUMBER: A Prime number is one with exactly two positive divisors, itself and one.
#include<stdio.h>
int main()
{
    int i,j,CHECK,m=1,n=10;

    for(j=m;j<=n;j++)
    {
        CHECK=1;
        if(j==1)
        {
            CHECK=0;
        }

        for(i=2;i<j;i++)
        {
            if(a%i==0)
            {
                CHECK=0;
            }
        }
        if(CHECK==1)
        {
            printf("%d is prime\n",j);
        }
    }
    return 0;
}

