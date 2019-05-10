#include<stdio.h>
int main()
{
    int a,b,d,i;
    scanf("%d %d",&a,&b);
    for(d=a+1;d<b;d++)
    {
        for(i=2;i<b/2;i++)
        {
            if(d%i!=0)
            {
                continue;
            }
            else
                goto ok;
        }
        printf("%d is prime\n",d);
        ok:
            printf("");
    }
    return 0;
}
