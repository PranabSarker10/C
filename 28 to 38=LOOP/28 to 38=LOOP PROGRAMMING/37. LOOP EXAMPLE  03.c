///Lopp example 03///
///Print a shape with star
#include<stdio.h>
int main()
{
    int i,j,k,r=1;
    printf("Print:\n");
    printf("****\n");
    printf("****\n");
    printf("****\n");
    printf("****\n");
    scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            for(i=1;i<=k;i++)
            {
                printf("*");
            }
            printf("\n");
        }



    printf("Now print:\n");
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");


        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            for(i=1;i<=j;i++)
            {
                printf("*");
            }
            printf("\n");
        }





    printf("Again print:\n");
    printf("*\n");
    printf("***\n");
    printf("*****\n");
    printf("*******\n");


        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            if(j%2==0)
                {
                    continue;
                }
            for(i=1;i<=j;i++)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("As it is not printed rightly so another way to print the shape of star:\n");
        scanf("%d",&k);
        for(j=1;j<=7;j++)
        {
            if(j%2==0)
                {
                    continue;
                }
            for(i=1;i<=j;i++)
            {
                printf("*");
            }
            printf("\n");
        }

      return 0;
}
