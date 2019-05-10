#include<stdio.h>

long long uva100(long long n)
{
    printf("%lld ",n);
    if(n==1)
    {
        return 1;
    }
    else if(n&1)///It means if it is 1 from (n & 1) then it is odd either it is even.
    {
        return uva100(3*n+1) + 1;///+1 means we will get the value of previous place from the present place.
    }
    else
    {
        return uva100(n/2) + 1;///+1 means we will get the value of previous place from the present place.
    }
}

int main()
{
    printf("\n%lld\n",uva100(22));
    return 0;
}
