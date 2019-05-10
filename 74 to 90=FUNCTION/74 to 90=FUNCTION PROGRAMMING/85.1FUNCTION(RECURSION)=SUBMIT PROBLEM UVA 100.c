#include<stdio.h>
int main()
{
    long long n;
    n=22;
    long long count=0;
    while(1)
    {
       printf("%lld ",n);
        count++;
        if(n==1)
            break;

        if(n&1)///It means if it is 1 from (n & 1) then it is odd either it is even.
        {
            n = 3*n + 1;
        }
        else
        {
            n=n/2;
        }
    }
    printf("\nTOTAL:%lld\n",count);
    return 0;
}
