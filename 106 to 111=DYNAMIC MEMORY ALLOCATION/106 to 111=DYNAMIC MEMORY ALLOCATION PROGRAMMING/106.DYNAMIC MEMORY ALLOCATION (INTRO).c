///Dynamic memory allocation(intro)
///By using dynamic memory allocation we increase or decrease the size. I mean, we can use how much we need by removing extra memory.
#include<stdio.h>
#include<stdlib.h>///stdlib means standard library. It is used to use the functions of dynamic memory allocation.
int main()
{
    int *ptr;///When we declare a pointer than it has no fixed address.
///*ptr is pointing a integer type data.
    int x;

    int pt,pointer;
    pt = malloc(4);
    pointer = malloc(sizeof(int));

    printf("%d  <=Remember it is a garbage value. As at the declraing time point has no fixed address.\n",ptr);
    printf("The address of integer x is: %d\n\n\n\n",&x);
    printf("AFTER USING MALLOC FUNCTION, WE GET AN ADDRESS(when malloc(4)):\n");
    printf("%d\n",pt);
    free(pt);
    printf("AFTER USING MALLOC FUNCTION, WE GET AN ADDRESS(when malloc(sizeof(int)):\n");
    printf("%d\n",pointer);
    free(pointer);

    printf("REMEMBER: Using free after malloc funtion is a must.\n");
///REMEMBER: Using free after malloc funtion is a must.
///Showing different address in different execution is fault.So don,t worry by seeing this.
    return 0;

}
