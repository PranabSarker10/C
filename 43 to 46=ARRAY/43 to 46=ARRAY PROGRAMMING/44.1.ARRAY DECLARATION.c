///Array declaration///
#include<stdio.h>
int main()
{
    int ab[5]={1,2,3,4,5},i;
    ab[0]=7;
    ab[2]=10;
    for(i=0;i<=4;i++)
    {
        printf("%d\n",ab[i]);
    }
    return 0;
}
