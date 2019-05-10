/*Here always we used %d because size-number is printed*/
#include<stdio.h>
int main()
{
    int num1=67;
    float num2=0.3;
    long int num3=45;
    double num4=33.33;
    char num5='a';
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long int));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(char));
    return 0;
}
