#include<stdio.h>
///Pointer is used to pass value.
///A function can pass a value. But using pointer we can pass many values.
void inc(int a)///Means a is pointing a integer type address.
{
    a++;
}


void increment(int *b)///Means a is pointing a integer type address.
{
    (*b)++;///Means the value of a will be increased.


}


int main()
{
    int a=4;
    printf("Before increment : %d\n",a);
    inc(a);
    printf("Before increment : %d\n",a);



    int b=5;
    printf("Before increment : %d\n",b);
    increment(&b);
    printf("Before increment : %d\n",b);

    return 0;
}

