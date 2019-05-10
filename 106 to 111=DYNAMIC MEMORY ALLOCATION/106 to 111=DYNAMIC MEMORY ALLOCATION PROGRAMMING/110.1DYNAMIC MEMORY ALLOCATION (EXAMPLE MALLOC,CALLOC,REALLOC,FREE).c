///Dynamic memory allocation (malloc,calloc,realloc,free)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;

    str = (char *)calloc(5,1);///Here without using sizeof the size of char=1 byte is directly assigned.
///Now it is an array which size is five(5).
    strcpy(str,"abcde");
    printf("%s\n",str);
///Here five places will be used. One place is for null character.
///Remember: If we take more than five,then it will depend on the memory space(But if we declare first how much will take, then no problem will be held).

    str = (char *)realloc(str, 3*1);
///Remember:Here after three the other values can come (if place is avaiable) or not come.
    printf("%s\n",str);
    free(str);

    return 0;
}
