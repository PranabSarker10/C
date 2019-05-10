#include<stdio.h>
int main()
{
    int a=2,b=4,c;
    //In this program if the statement becomes true it will print '1' and if the statement becomes false it will print '0'
    c=a>b;
    printf("%d\n",c);
    c=a<b;
    printf("%d\n",c);
    a++;
    ++a;
    c=a==b;//Here the double equals means a is equal to b and one equal mean (a==b) is assigned to c
    printf("%d\n",c);
    return 0;
}
