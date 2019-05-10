#include<stdio.h>
int main()
{
    int array[100],i,n,key,loc,ck;
    scanf("%d",&n);//The total array number
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);//Taking all array numbers
    }
    scanf("%d",&key);//The number which location I want to know
    ck=0;
    for(i=0;i<n;i++)
        if(array[i]==key)
        {
            ck=1;
            loc=i+1;
        }
    if(ck==1)
    {
        printf("%d",loc);//Printing the location of the number
    }
    else
    {
        printf("No");
    }
    return 0;
}
