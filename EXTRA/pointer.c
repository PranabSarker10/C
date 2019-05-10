#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,*b,*max;
    a=(int*)malloc(sizeof(int));
    b=(int*)malloc(sizeof(int));
    scanf("%d %d",a,b);
    if(*a*b)
        max=a;
    else
        max=b;
    printf("MAX=%d",*max);
    return 0;
}
