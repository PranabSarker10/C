#include<stdio.h>
int main()
{
    int a,b,i,d;
    printf("Enter the lower limit number:\n");
    scanf("%d",&a);
    printf("Enter the upper limit number:\n");
    scanf("%d",&b);
    if(a==0)
        goto j;
    j:
        a=1;
    for(d=a;d<=b;d++)
    {
        if(d==1)
        {
            goto ok;
        }
       for(i=2;i<d/2;i++)
       {
           if(d%i!=0)
           {
               continue;
           }
           else
               goto ok;
       }
        printf("%d is a prime number\n",d);
        ok:
            printf("");
    }
    return 0;
}
