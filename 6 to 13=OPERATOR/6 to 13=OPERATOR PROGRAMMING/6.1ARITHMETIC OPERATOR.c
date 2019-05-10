//Arithmetic operator
//Integer opertor: + - * / %
//Real operator : + - * /
/* % wont't be use at real operator(Real operator means float or double type operator)*/
#include<stdio.h>
int main()
{
    int num1=5,num2=2,res1,res2;/*Remember here 2 res (res1 & res2) is needed to store two different types result(one is QUOTIENT=res1 and another is REMAINDER=res2)*/
    float num3=2,num4=5,RES;
    res1=num1/num2;//num1/num2=res;<= This is not right way. Because assignment is applicable from left side to right side.
    res2=num1 % num2;//num1 % num2=res;<= This is not right way. Because assignment is applicable from left side to right side.
    RES=num3/num4;//num3/num4=RES;<= This is not right way. Because assignment is applicable from left side to right side.
    //RES=num3 % num4;<=This is not possible as it is real operator.
    printf("%d/%d=%d\n",num1,num2,res1);
    printf("%d %d=%d\n",num1,num2,res2);//printf("%d % %d=%d",num1,num2,res); <= This statement is wrong. Because (only % )can't be printed.
    printf("%f/%f=%f\n",num3,num4,RES);
    //printf("%f %f=%f",num3,num4,RES);<=This is not possible as it is real operator.
    return 0;
}
