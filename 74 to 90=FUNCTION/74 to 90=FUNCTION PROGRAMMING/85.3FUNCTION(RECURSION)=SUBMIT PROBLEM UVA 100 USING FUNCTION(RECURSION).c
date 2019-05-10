#include<stdio.h>
/**
n >>= 1;
// or
n = n >> 1;
// is much faster than
n = n / 2;
// or
n /= 2;
**/
///Remember: We can call a function not only from the main function but also from another function.
///Unnecessary space can cause compile error in programming contest.
long long uva100(long long n)
{
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

long long mxcycle(long long a, long long b)
{
    if(a>b)
        return mxcycle(b,a);
    long long mx=0,cycle;
    while(a<=b)
    {
        cycle = uva100(a);
    if(mx<cycle)
        mx = cycle;
    a++;
    }
    return mx;
}
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    printf("%lld %lld %lld\n",a,b,mxcycle(a,b));

    return 0;
}
