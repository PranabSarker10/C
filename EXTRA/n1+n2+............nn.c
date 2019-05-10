#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter an integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;

    }
    printf("%d\n",sum);
    return 0;
}
