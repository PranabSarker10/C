#include<stdio.h>
int main()
{
    int a[13]={12,23,30,32,38,42,50,60,65,70,85,90,100};
    int start,end,i,key,mid;

    start = 0;
    end = 12;
    key = 33;
    do
    {
        mid=(int){(start+end)/2};
        printf("Start:%d\t End:%d\t Mid:%d\t key:%d\t a[mid]:%d\n",start,end,mid,key,a[mid]);
        if(a[mid]==key)
        {
            printf("Find at %d\n",mid+1);
            break;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        if(a[mid]<key)
        {
            start = mid+1;
        }
    }
    while(start<=end);


    if(start>end)
    {
        printf("Failed\n");
        printf("Start:%d\t End:%d\t Mid:%d\t key:%d\t a[mid]:%d\n",start,end,mid,key,a[mid]);
    }
    return 0;
}

