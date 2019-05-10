///Dynamic memory allocation(Self reference structure)
///Here self reference structure is presented by dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>

struct mystructure
{
    int a;
    struct mystructure *next;///Remember: By using this pointer we are linking between two same type structures.
};
///self reference structure is a such kind of structure where reference pointer is present.And this reference pointer points another structure of same type.
/**
Every self reference structure has 2 elements.
1.Value
2.Reference
**/

void print(struct mystructure *ptr)
{
    printf("%d\n",ptr->a);
}

int main()
{
    struct mystructure a,b,c,d,e;
    a.a = 5;
    print(&a);

    return 0;
}
