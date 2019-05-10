///Nested loop///
#include<stdio.h>
int main()
{
    int a,b,i,j;

    for(i=1;i<=5;i++)
    {
        printf("\nTake upper and lower limit using a space:\n");
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            printf("%d ",j);
        }
    }
    return 0;
}

