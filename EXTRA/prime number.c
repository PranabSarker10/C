#include<stdio.h>
int main()
{
    int a,b,i,d;
    printf("Enter the lower limit number:\n");
    scanf("%d",&a);
    printf("Enter the upper limit number:\n");
    scanf("%d",&b);
    for(d=a+1;d<b;d++)
    {
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

