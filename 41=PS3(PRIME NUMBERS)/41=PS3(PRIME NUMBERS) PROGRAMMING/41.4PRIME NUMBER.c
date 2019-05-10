///PRIME NUMBER: A Prime number is one with exactly two positive divisors, itself and one.
#include<stdio.h>
int main()
{
    int i,j,CHECK,m,n,TEMP,sum=0;
    printf("Enter the lower & upper limit of the prime numbers but it is not necessary to take lower number at first and then upper number :\n");
    scanf("%d %d",&m,&n);
    if(m>n)
    {
        TEMP=m;
        m=n;
        n=TEMP;
    }

    for(j=m;j<=n;j++)
    {
        CHECK=1;
        if(j==1)
        {
            CHECK=0;
        }

        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
                CHECK=0;
            }
        }
        if(CHECK==1)
        {
            printf("%d is prime\n",j);
            sum=sum + j;
        }
    }
    printf("Sum=%d",sum);
    return 0;
}
