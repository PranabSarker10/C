#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    if(m>=33 && m<=39)
    {
        printf("%d=d",m);
    }

    else if(m>=80 && m<=100)
    {
        printf("%d=a+",m);
    }
    else if(m>0 && m<=32)
    {
        printf("fail");
    }

    return 0;
}
