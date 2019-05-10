#include<stdio.h>
int main()
{
    int i,n,fact;
    while(scanf("%d",&n)!=EOF)
    {
        fact=1;
        while(n>1)
        {
            fact=fact*n;
            n--;
        }
      printf("factorial=%d\n",fact);
    }
    return 0;
}

