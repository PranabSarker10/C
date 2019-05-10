//SINGLE COMMENT=This is program of addition
/*MULTI-LINE COMMENT=Here V1+V2 and num1+num2 is finding out.
This is a multi-line comment*/
#include<stdio.h>
int main()
{
     int num1,num2,v1,v2;
     num1=5;
     num2=6;
     v1=7;
     v2=8;
     //USE OF BACKSLASH(\)=If we type ONE BACKSLASH(\) and anything after backslash then the anything after backslash(\) will be printed//
     printf("\\\\%d\'\"",num1+num2);//Here elaborately {\\\\%d\'\""} printed metarials are typed in first bracket=\(\)\(\)(%d)\(')\(")"
     printf("\n\\\%d'\"",num1+num2);
     printf("\n\\%d'\"",num1+num2);
     printf("\n\\%d'\\""",num1+num2);//Here \(\%d')\(\) 1st bracket's elements will be printed
     printf("\n""%d""",num1+num2);//IF "something" or ""something"" or """something""" then something will be printed
     printf("\n%d",v1+v2);
     return 0;
}
//USE OF BACKSLASH(\)=If we type ONE BACKSLASH(\) and anything after backslash then the anything after backslash(\) will be printed//
