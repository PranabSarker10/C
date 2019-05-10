///Structures and Unions (Structure and Pointer) ...
///By using pointer we can use the member variables of structure.
#include<stdio.h>
#include<string.h>
struct Structure{
    char name[12];
    int value;
};

void swap (struct Structure *a,struct Structure *b)///From here address is received.
///By using pointer if we want to access the members of a structure, then we need to use the sign (->).
{
    struct Structure temp;

    strcpy(temp.name,a->name);
    temp.value = a->value;

    strcpy(a->name,b->name);
    a->value = b->value;

    strcpy(b->name,temp.name);
    b->value = temp.value;
}
int main()
{
    struct Structure value1,value2;
    printf("Enter value1's Name and Value:\n");
    scanf("%s%d",value1.name,&value1.value);
    printf("Enter value2's Name and Value:\n");
    scanf("%s%d",value2.name,&value2.value);

    if(value2.value>value1.value)
        swap(&value1,&value2);///From here address is sent.
///The work of swap function is interchange.

    printf("Value1 ( %d ) %s\n",value1.value,value1.name);
    printf("Value2 ( %d ) %s\n",value2.value,value2.name);

    return 0;
}
