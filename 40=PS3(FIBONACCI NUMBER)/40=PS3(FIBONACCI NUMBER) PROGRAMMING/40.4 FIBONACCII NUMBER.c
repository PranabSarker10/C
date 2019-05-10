#include<stdio.h>
int main()
{
    int a,b,c,i,n,T;
    scanf("%d ",&T);
    while(T--)
    {
        scanf("%d",&n);
        a=0;b=1;
        for(i=a;i<=n;i++)
        {
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
        printf("\n");
    }
    return 0;
}

