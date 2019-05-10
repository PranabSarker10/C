///PRIME NUMBER: A Prime number is one with exactly two positive divisors, itself and one.
#include<stdio.h>
int main()
{
    int i,j,CHECK,m,n;
    printf("Enter the lower & upper limit of the prime numbers:\n");
    scanf("%d %d",&m,&n);

    for(i=m;i<=n;i++)
    {
        CHECK=1;
        if(i==1)
        {
            CHECK=0;
        }

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                CHECK=0;
            }
        }
        if(CHECK==1)
        {
            printf("%d is prime\n",i);
        }
    }
    return 0;
}
