#include<stdio.h>
int main()
{
        int i,j,k;
        printf("As it is not printed rightly so another way to print the shape of star:\n");
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            for(i=1;i<=j;i++)
            {
                printf("*");
            }
            printf("\n");
        }
     return 0;
}
