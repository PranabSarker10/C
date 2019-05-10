///Conditional Operator
//(exp1) ? true : false;

///Comma Operator
/*
(   ,   ,   ,  )
This operator is executed from left to right and the all statements come to an end at the last statement of right side. And this last statement of rightside is printed.
*/
#include<stdio.h>
int main()
{
    int x=7,y=10,z;
    int a=5,b=6,comma;
    comma=(a,b,a-b);
    printf("%d\n",comma);
    (x<y) ? printf("%d",x) : printf("%d",z);//(exp1) ? true : false;
    z=(x>y)?x:y;
    printf("\n%d",z);//(exp1) ? true : false;
    return 0;
}
