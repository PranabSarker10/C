///File Management (EOF)

#include<stdio.h>
#include<stdlib.h>
int main()
{
    freopen("input.txt","r",stdin);///This works to make all printf->fprintf.
    freopen("output.txt","w",stdout);///This works to make all scanf->fscanf.
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",n);
    }
    return 0;
}
