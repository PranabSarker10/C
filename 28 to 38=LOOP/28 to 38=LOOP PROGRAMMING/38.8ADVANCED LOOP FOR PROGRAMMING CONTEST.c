///Advanced loop for programming contest///
#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("Now use of if-else statement to terminate the loop:\n");
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
            return 0;
        sum=a+b;
        printf("sum=%d\n",sum);
    }




    printf("Here the loop can't be terminate as it is truth(while (1)) for all-time:\n");
    while(1)
    {
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("sum=%d\n",sum);
    }
    return 0;
}
