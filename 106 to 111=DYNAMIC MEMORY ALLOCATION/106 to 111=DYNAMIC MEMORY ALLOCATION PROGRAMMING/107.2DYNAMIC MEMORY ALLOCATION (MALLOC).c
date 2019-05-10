///Dynamic memory allocation (malloc)
///Remember: If we allocate a memory 2nd time by a malloc function than all the previous data will be lost.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100];
///The next to line is equal to int arr[100]. But the advantage is by writing the next two-lines we can use memory exactly how much we need.

    int *ptr;///Here ptr has become an array which size is 100.
    ptr = (int *)malloc(100 * sizeof(int));

    free(ptr);

    return 0;
}
