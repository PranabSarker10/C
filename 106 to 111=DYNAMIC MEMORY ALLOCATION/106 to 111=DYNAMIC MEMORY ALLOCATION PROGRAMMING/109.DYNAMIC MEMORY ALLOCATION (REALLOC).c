///Dynamic memory allocation (realloc)
///Realloc is used to giving new size(By increasing or decreasing) of the previous data without changing it.
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *ptr;


    ptr = (int  *)malloc(10 * sizeof(int));

    ptr[1] = 5;
    printf("%d\n",ptr[1]);

    ptr = (int *)realloc(ptr, 10*sizeof(int));///Here reallocate is done so previous value will not be found.
///Here at first the name of pointer is assigned(which I need to reallocate) and then aize is assigned.
    printf("%d\n",ptr[1]);
///Remember: If we reallocate by calloc,then all the values will be autometically 0. But in malloc it is not happened.
///Remember: After declaring using free function to make the memory free is mast.

    free(ptr);

    return 0;
}
