#include<stdio.h>
int main()
{
    int array[100],key,n,i,j,ck,loc;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        scanf("%d",&key);
        ck=0;
        for(i=0;i<n;i++)
        {
            if(array[i]==key)
            {
                ck=1;
                loc=i+1;
            }
        }
        if(ck==1)
            printf("%d\n",loc);
        else
            printf("NO\n");
    return 0;
}

