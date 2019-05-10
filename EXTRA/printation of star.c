#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
            for(k=1;k<i+1;k++)
            {
                printf("* ");
            }
            printf("\n");
    }
    return 0;
}
