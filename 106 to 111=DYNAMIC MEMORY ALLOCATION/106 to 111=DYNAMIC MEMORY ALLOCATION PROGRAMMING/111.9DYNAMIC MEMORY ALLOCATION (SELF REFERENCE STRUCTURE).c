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
//    if(ptr==NULL)
//    {
//        printf("NULL\n");
//        return;
//    }
//    printf("%d\n",ptr->a);
//    print(a->next);

      while(1)
      {
           if(ptr==NULL)
           {
                printf("NULL\n");
                break;
           }

           printf("%d\n",ptr->a);
           ptr = ptr->next;
      }
}

int main()
{
    struct mystructure *obj_start, *obj_end,*obj;
    obj_start=NULL;
    obj_end=NULL;
    obj = NULL;


    obj = (struct mystructure *)malloc(sizeof(struct mystructure));

    print(obj);///It pointing something which is not NULL. So it has fallen in infinity loop.

    return 0;
}



