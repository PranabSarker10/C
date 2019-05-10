#include<stdio.h>
int main()
{
    int a,b,gcd,lcd,x,t;
    scanf("%d %d",&a,&b);
    x=(a*b);
    if(a==0)
        gcd=a;
    else if(b==0)
        gcd=b;
    else
    {
        while(b!=0)
        {
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    printf("%d\n",gcd);
    lcd=x/gcd;
    printf("%d\n",lcd);
    return 0;

}
