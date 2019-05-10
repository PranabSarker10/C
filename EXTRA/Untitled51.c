///Lopp example 03///
///Print a shape with star
#include<stdio.h>
int main()
{
    int i,j,k,m;
    scanf("%d",&j);
    //for(i=1;i<=j;i++)
    //{
        for(k=1;k<=j;k++)
        {
            for(m=1;m<=j;m++)
            {
                printf("*");
            }
            printf("\n");
        }
    //}
    return 0;
}




