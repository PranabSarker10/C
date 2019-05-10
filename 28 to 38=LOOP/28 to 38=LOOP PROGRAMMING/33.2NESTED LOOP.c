 ///Nested loop///
#include<stdio.h>
int main()
{
    int a,b,i,j;

    for(i=1;i<=5;i++)
    {
        printf("\nTake upper and lower limit using a space:\n");
        scanf("%d %d",&a,&b);
        while(a<=b)
        {
            printf("%d ",a++);
        }
    }
    return 0;
}


