///Advanced loop for programming contest///
#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("Here the loop can't be terminate as it is truth(while (1)) for all-time:\n");
    while(1)
    {
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("sum=%d\n",sum);
    }
    return 0;
}
