#include<stdio.h>
int main()
{
    int i,m;
    scanf("%d",&m);
    for(i=1;i<m;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
