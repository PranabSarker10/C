///Pointer
///Advantages
///Pointer works with specific memory.
///Controlling variable by another variable.
///We can return nothing or any one-item by function but we can return or pass many things by pointer.
#include<stdio.h>
int main()
{
    int a;///a is a variable and its address is &a.
    int *p;///1.=>1st boy.
///System of declaring a pointer. Here integer type pointer is declared.
    scanf("%d",&a);/// It means that it will take in the address of a.
///pointer declare means pointing something.

    p = &a;///2.=>Address of the 1st boy.
///Addressing(&a) the 1st boy(p).
    *p=5;///3.value is given to the 1st boy.
///Giving value to a 1st boy.

    printf("%d\t %d\n",a,*p);///Here 'a' is Pranab(name) and '*p' is 1st boy. Here both are indicating the same character.
    a=6;
    printf("%d\t %d",a,*p);///If we change 'a', '*p' and 'a' both will be changed.
///If I don't know who is our 1st boy we can't give him something(like red pen).
///It's impossible for me to use a value of our 1st boy without knowing him. This not a good practise.
    return 0;
}
