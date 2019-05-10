#include<stdio.h>
int main()
{
    int a[10]={1,4,5,7,45,2,56,107,5,13},i,j;
    for(i=0;i<=9;i++)//.................(1)
    {
        printf("%d\n",a[i]);
    }
printf("NOW ARRAY TRAVERSING FROM OPPOSITE DIRECTION\n");

    for(j=9;j>=0;j--)//.................(2)
    {
        printf("%d\n",a[j]);
    }
///Here (1) and (2) both are included in array traversing formula///
    return 0;
}
