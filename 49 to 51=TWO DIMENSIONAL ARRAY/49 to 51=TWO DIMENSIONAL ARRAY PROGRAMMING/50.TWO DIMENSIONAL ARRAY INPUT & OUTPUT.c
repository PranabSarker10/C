#include<stdio.h>
int main()
{
    int i,j,a[5][5];
    for(j=0;j<5;j++)
        {
            for(i=0;i<5;i++)
            {
                scanf("%d",&a[j][i]);
            }
        }
        printf("%d",a[3][0]);
     return 0;
}
