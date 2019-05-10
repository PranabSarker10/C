#include<stdio.h>
int main()
{
    int a=2,b=4;
    printf("%d %d %d %d %d\n",a&b,a|b,a^b,a<<2,a>>1);
    return 0;
}
//Here a sequence: 1024 512 256 128 64 32 16 8 4 2 1
//Here a&b operation : 0,1=0; 0,0=0; 1,0=0; 1,1=1;
//Here a|b operation : 0,1=1; 0,0=0; 1,0=1; 1,1=1;
//Here a^b operation : 0,1=1; 0,0=0; 1,0=1; 1,1=0;
//Here a>>1 means a=2 will be a=1 by going rightside for one-time.
//Here a<<2 means a=2 will be a=8 by going leftside for two-times.
