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
    int n = 5,x;
    obj_start=NULL;
    obj_end=NULL;
    obj = NULL;


    while(n--)
    {
/// For n-NUMBER values:
        if(obj_start == obj_end && obj_start == NULL)
        {
            obj = (struct mystructure *)malloc(sizeof(struct mystructure));
            scanf("%d",&x);
            obj->a = x;
            obj->next = NULL;
            obj_start = obj_end = obj;
        }
        else
        {
            obj = (struct mystructure *)malloc(sizeof(struct mystructure));
            scanf("%d",&x);
            obj->a = x;
            obj->next = NULL;
            obj_end->next = obj;
            obj_end = obj;///Now object end will point object.

        }
    }
    print(obj_start);

    return 0;
}
