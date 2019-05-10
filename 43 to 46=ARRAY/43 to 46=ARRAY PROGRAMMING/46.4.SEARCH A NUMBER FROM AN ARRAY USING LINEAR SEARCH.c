#include<stdio.h>
int main()
{
    int array[100],i,n,cas=1,key;
    while(scanf("%d",&n)!=EOF)//The total array number
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);//Taking all array numbers.Here every number will be separate from each other.
        }
        scanf("%d",&key);//The number which location I want to know
        for(i=0;i<n;i++)
        if(array[i]==key)
        {
            break;
        }
        printf("cas%d: ",cas);
        cas++;
        if(i==n)
        {
            printf("No\n");//Printing the location of the number
        }
        else
        {
            printf("%d\n",i+1);//Here (i+1) is the location
        }
    }
    return 0;
}

