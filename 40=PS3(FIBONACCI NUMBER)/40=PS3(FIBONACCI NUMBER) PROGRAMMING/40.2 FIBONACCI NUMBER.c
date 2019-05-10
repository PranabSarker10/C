#include<stdio.h>
int main()
{
    int n=5,i,a=0,b=1,c;
    for(i=1;i<=n;i++)
    {
        if(i==n)
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
