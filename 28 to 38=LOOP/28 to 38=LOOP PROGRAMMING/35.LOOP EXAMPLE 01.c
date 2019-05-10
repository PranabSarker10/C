///LOOP EXAMPLE 01///
///print all integer between m & n in ascending or
#include<stdio.h>
int main()
{
    int m,n,i,temp;
    printf("Enter lower and upper integer:\n");
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\n\n\n\nNow enter upper and lower/lower and upper integer and here it won't happen anything:\n");
    scanf("%d%d",&m,&n);

    if(m>n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    for(i=m;i<=n;i++)
    {
        printf("%d ",i);
    }






    printf("\nNow using decrement:\n");

    printf("Enter upper and lower integer:\n");
    scanf("%d %d",&m,&n);
    for(i=m;i>=n;i--)
    {
        printf("%d ",i);
    }
    printf("\n\n\n\nNow enter upper and lower/lower and upper integer and here it won't happen anything:\n");
    scanf("%d%d",&m,&n);

    if(m<n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    for(i=m;i>=n;i--)
    {
        printf("%d ",i);
    }



    return 0;
}












