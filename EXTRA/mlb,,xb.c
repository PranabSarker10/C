#include<stdio.h>
void add (int a, int b, int c)
{
    int x,y,sum;
    if(a!=0 || b!=0)
    {
        x = a%10;
        y = b%10;
        sum = x+y+c;
        printf("%d",sum%10);
        add (a/10, b/10 ,sum/10);
    }
    return a+b+c;
}
int main()
{
    int a=157,b=781,;
    printf("%d",add(157,781));
    return 0;
}


