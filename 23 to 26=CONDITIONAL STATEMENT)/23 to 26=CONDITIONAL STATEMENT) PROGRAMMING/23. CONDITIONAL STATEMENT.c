//Conditional statement
#include<stdio.h>
int main()
{
    int bangladesh,india,pakistan,a;
    bangladesh=1;
    india=1;
    pakistan=0;
    if(bangladesh=india)
    {
        printf("Bangladesh will win\n\n");
    }
    else
    {
        printf("India will win\n\n");
    }
    if(india=pakistan)
    {
        printf("Pakistan will win\n\n");
    }
    else
    {
        printf("India will win\n\n");
    }
    if(4>5)
    {
        printf("4 = false\n\n");
    }
    else
    {
        printf("5 = true\n\n");
    }
    if(4<5)
    {
        printf("Enter an integer:");
        scanf("%d",&a);
        printf("%d\n\n",4-a);
    }
    else
    {
        printf("%d\n\n",5);
    }
// Only one condition we can use only if.

    return 0;
}
