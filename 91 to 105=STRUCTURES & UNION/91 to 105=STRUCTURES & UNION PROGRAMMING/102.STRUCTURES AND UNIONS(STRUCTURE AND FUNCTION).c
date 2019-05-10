///Structures and unions ( structure and function )
///The value of variables is changed in two cases:(a)Parameter (b)Return_type
///Remember: mem and mem1 must be same type.(Here the type is mystructure.
#include<stdio.h>

struct mystructure {
    int x;
    float y;
};
void print(struct mystructure pr)
{
    printf("x = %d\n",pr.x);
    printf("y = %f\n",pr.y);
}
struct mystructure add (struct mystructure a, struct mystructure b)
{
    struct mystructure result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
};


int main()
{
    struct mystructure mem,mem1,sum;
    mem.x = 5;
    mem.y = 6.6;
    printf("\t Before assign\n");
    printf("mem\n");
    print(mem);
    printf("mem1\n");
    print(mem1);
    mem1 = mem;

    printf("\t After assign\n");
    printf("mem\n");
    print(mem);
    printf("mem1\n");
    print(mem1);

    sum = add(mem1,mem);///Here we can use assignment operator,not + operator.So add function is used here.
    printf("Sum\n");
    print(sum);

    return 0;
}
