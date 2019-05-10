#include<stdio.h>
int main()
{
    int a=5,b=6,c,d;
    printf("Before inter-changea: a=%d, b=%d\n\n",a,b);
    c=a;
    d=b;
    a=d;
    b=c;
    printf("After inter-change: a=%d, b=%d\n\n",a,b);

    printf("Another easy system without using d is in below:\n");

    printf("Before inter-changea: a=%d, b=%d\n\n",a,b);//Here the lastest a & b will be printed.
    c=a;
    a=b;
    b=c;
    printf("After inter-change: a=%d, b=%d\n\n",a,b);


    printf("NOW THE MOST WONDERFUL SYSTEM WITHOUT USING c & d=\n");


    return 0;
}
