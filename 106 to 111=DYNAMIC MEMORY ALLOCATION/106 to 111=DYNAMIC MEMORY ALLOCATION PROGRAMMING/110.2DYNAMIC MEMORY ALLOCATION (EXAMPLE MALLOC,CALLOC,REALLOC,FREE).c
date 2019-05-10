///Dynamic memory allocation (malloc,calloc,realloc,free)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;

    str = (char *)calloc(5,1);///Here without using sizeof the size of char=1 byte is directly assigned.
    strcpy(str,"abcde");
    printf("%s\n",str);
    free(str);///As we use free function here so the next part won't take any value.

    str = (char *)realloc(str, 3*1);
    printf("%s\n",str);
    free(str);

    return 0;
}

