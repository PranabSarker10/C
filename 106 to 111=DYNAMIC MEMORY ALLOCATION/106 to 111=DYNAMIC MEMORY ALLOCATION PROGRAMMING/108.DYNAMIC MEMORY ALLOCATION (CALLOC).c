///Dynamic memory allocation (calloc)
///Calloc function also return void like as malloc function.
///The main difference between malloc and calloc is:In calloc function we have no need to multiply something to create an array. Here we only need to tell the size.

///Remember: use of calloc has more advantage than use of malloc in array declaration.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ///ptr = (int *)malloc(10 * sizeof(int));///Here calculating is needed.
    ptr = (int *)calloc(10 , sizeof(int));///Here only call is needed.

    ptr[1] = 5;
    printf("%d\n",ptr[1]);

    ptr = (int *)calloc(20 , sizeof(int));///Here reallocate is done so previous value will not be found.
    printf("%d\n",ptr[1]);
///Remember: If we reallocate by calloc,then all the values will be autometically 0. But in malloc it is not happened.
///Remember: After declaring using free function to make the memory free is mast.

    free(ptr);

    return 0;
}
