#include<stdio.h>
int main()
{
    int array[100],i,n,key;
    scanf("%d",&n);//The total array number
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);//Taking all array numbers
    }
    scanf("%d",&key);//The number which location I want to know
    for(i=0;i<n;i++)
    if(array[i]==key)
    {
        break;
    }
    if(i==n)
    {
        printf("No");//Printing the location of the number
    }
    else
    {
        printf("%d",i+1);//Here (i+1) is the location
    }
    return 0;
}
