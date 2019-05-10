#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,i,sum=0;
    int n[4];
    for(i=0;i<=3;i++)
    {
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
///nm[0]=num1
///nm[1]=num2
///nm[2]=num3
///nm[3]=num4
///sum=num1+num2+num3+num4
    printf("%d",sum);
    return 0;
}
