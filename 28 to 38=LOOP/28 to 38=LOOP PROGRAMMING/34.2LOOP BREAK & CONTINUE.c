///Loop break & continue///
///Continue
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("%d ",i);

        printf("%d ",i);
    }


    printf("\nNow using continue between two printf:\n");
    for(i=1;i<=5;i++)
    {
        printf("%d ",i);
        continue;
        printf("%d ",i);
    }


    printf("\nNow using (if i==3) statement before continue:\n");
    for(i=1;i<=5;i++)
    {
        printf("%d ",i);
        if(i==3)
        continue;
        printf("%d ",i);
    }
    return 0;
}
