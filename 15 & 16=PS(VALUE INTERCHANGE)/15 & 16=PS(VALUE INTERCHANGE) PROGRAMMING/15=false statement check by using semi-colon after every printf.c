#include<stdio.h>
int main()
{
    int a=5,b=3,x=3,y=7,z=2;
    (a<b)? printf("a<b\n");:(a==b)? printf("a==b\n");:printf("a>b\n");//Nested statement is allowed.
    (x>y && x>z && y>z)?printf("%d %d %d\n",x,y,z);:(x>y && x>z && z>y)?printf("%d %d %d\n",x,z,y);:(y>x && y>z && z>x)?printf("%d %d %d\n",y,z,x);:(y>x && y>z && x>z)?printf("%d %d %d\n",y,x,z);:(z>x && z>y && x>y)?printf("%d %d %d\n",z,x,y);:printf("%d %d %d\n",z,y,x);
    return 0;
}



