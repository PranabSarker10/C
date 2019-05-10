///Dynamic memory allocation (malloc)
///Remember: We can't declare void type value. But we can declare void type integer.
///Mallc function is used to controll array size.
///But the main work of malloc,calloc and realloc is in linked list.

#include<stdio.h>
#include<stdlib.h>
/**
void *malloc(size_t);///size_t(integer type variables size is assigned in malloc function.

int main()
{
    void *ptr;///It means it will point void type something. So void data_type is used here.
  ///malloc,calloc,realloc,free generally return void_type pointer.
    return 0;
}
**/
int main()
{
    int *pointer;
    int arr[100];

    pointer = (int *)malloc(5*sizeof(int));///As malloc return void_type pointer so for making it integer_type casting is done by writing (int *)
    pointer[1] = 5;
    printf("%d\n",pointer[1]);
    pointer = (int *)malloc(10*sizeof(int));
    printf("%d\n",pointer[1]);

    free(pointer);

    return 0;
}
