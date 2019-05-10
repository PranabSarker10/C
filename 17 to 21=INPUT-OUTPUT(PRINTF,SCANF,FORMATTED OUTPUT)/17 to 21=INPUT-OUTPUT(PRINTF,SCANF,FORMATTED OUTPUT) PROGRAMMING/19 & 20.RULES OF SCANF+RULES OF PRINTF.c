/*
//Rules of printf:
1. To print (%) % after % should be written.
2. To print (") " after \ should be written.

*/
/*
//Rules of scanf:
1.Without string every of the scanf & is needed before of input value.

*/
#include<stdio.h>
int main()
{

    int a=5,b=6,c=7,d=3,e,i,p,m;

    float f;

    char o,k;

    printf("\n\"%%PRANAB SARKER%%\"");
    printf("\n%d\n",5);
    printf("\n%d\n",a);
    printf("\n%d\n",e);// As the value of b is not known so it will show garbage value.
    printf("\n%d\n",'b');//Here ASCII value of 'b' will be printed.
    printf("\n%d\n",a++);//1st print then increment(a becomes 6).
    printf("\n%d\n",a++);//1st increment(a becomes 7) then print.
    printf("\n%d\n",a+5);//a=7 and 7+5=12.
    printf("\n%d\n",++a);//a becomes 8.
/*
NOTE:
The work of print of printf function is not started from left side,it starts from right side.
*/
    printf("\n%d %d %d\n",a,b,a+b);
    printf("\n%d %d %d\n",c=5,d=123,c+d);//Here the founded value of (c+d) is not right(garbage value).
/*As it has not found the value of c,d before printf and as the printf starts from right side so exact value of c+d will nor be printed.
Because it found c+d before the value of c & d.
*/
    printf("\n%d %d %d\n",c+d,c,d);

    printf("\n-> -> -> -> -> -> -> -> -> -> -> -> -> NOW scanf\n");

    printf("Enter an integer and a floating point number\n");
    scanf("%d %f",&i,&f);
    printf("Integer and floating point number is:%d %f\n",i,f);
/*
    A fantastic problem is created when we take input of an integer and a character using a space between them.");
    It never prints the character because space is a character and it takes the place of the character.
*/
    printf("Enter an integer and a character using a space between them:\n");
    scanf("%d%c",&p,&o);
    printf("Integer and Character:%d %c\n",p,o);
    scanf("%c",&o);//Here scanf is used to take input of the missing (o).


    printf("Enter an integer and a character without using a space between them:\n");
    scanf("%d%c",&m,&k);
    printf("Integer and Character:%d %c\n",m,k);
    return 0;
}




