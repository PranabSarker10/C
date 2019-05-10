//ARITHMETIC OPERATOR
//INTEGER OPERATOR: + - * / %
//REAl OPERATOR: + - * /

/* PRECAUTION= % is used only at integer opertor. And =(ONLY %) will never be printed.*/
#include<stdio.h>
int main()
{
    int num1=5 , num2=2, res1,res2;
    float num3=2, num4=5, RES1,RES2;
    res1=num1/num2;//Here num1/num2 =res; is not the right way. Because assignment is applicable from right to left.
    res2=num1%num2;//Here num1%num2 =res; is not the right way. Because assignment is applicable from right to left.
    RES1=num3/num4;//Here num3/num4 =RES; is not the right way. Because assignment is applicable from right to left.
    RES2=num3%num4;//Here num3/num4 =RES; is not the right way. Because assignment is applicable from right to left.
    printf("%d / %d=%d\n",num1,num2,res1);
    printf("%d  %d=%d\n",num1,num2,res2);//printf("%d % %d=%d\n",num1,num2,res2);<=THIS is wrong.
    printf("%f / %f=%f\n",num3,num4,RES1);
    //printf("%f  %f=%f\n",num3,num4,RES2);<=THIS is not applicable as it is a real operator.
    return 0;
}
