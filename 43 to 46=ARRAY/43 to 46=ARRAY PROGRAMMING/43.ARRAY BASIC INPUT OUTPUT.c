///Array basic input-output///
#include<stdio.h>
int main()
{
    int i,sum=0;
    int n[4];//Here num1,num2,num3,num4 will be assigned.
    for(i=0;i<=3;i++)
    {
        scanf("%d",&n[i]);//Here num1,num2,num3,num4 will be inputted.If we take more than four numbers than only first four numbers will be printed.
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
