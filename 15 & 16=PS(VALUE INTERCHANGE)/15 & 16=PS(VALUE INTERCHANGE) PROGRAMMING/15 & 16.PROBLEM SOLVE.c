#include<stdio.h>
int main()
{
    int a=5,b=3;
    x=3,y=7,z=2;
    (a<b)? printf("a<b"):(a==b)? printf("a==b"):printf("a>b");//Nested statement is allowed.
    (x>y && x>z && y>z)?printf("%d %d %d",x,y,z):(x>y && x>z && z>y)?printf("%d %d %d",x,z,y):(y>x && y>z && z>x)?printf("%d %d %d",y,z,x):(y>x && y>z && x>z)?printf("%d %d %d",y,x,z):(z>x && z>y && x>y)?printf("%d %d %d",z,x,y):(z>x && z>y && y>x)?printf("%d %d %d",z,y,x);
    return 0;
}
