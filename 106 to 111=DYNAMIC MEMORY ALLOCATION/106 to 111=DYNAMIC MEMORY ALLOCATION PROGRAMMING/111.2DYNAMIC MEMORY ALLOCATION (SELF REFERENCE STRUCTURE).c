///Dynamic memory allocation(Self reference structure)
///Here self reference structure is presented by dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>

struct mystructure
{
    int a;
    struct mystructure *next;///Remember: By using this pointer we are linking between two same type structures.
};

void print(struct mystructure *ptr)
{
    if(ptr==NULL)
        return;
    printf("%d\n",ptr->a);
}

int main()
{
    struct mystructure a,b,c,d,e;
    a.a = 5;
    a.next = NULL;
    print(&a);

    return 0;
}