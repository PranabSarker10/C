///Structures snd unions ( Self reference )
#include<stdio.h>

struct self_ref
{
    int a;
    struct self_ref *next; ///Here pointer means it will point self_ref type something.
///It creates link between two variables. If we access one variable other variable will also be accessed.
};

void print_all(struct self_ref pr)
{
    if(pr.a==0)
        return;
    printf("%d ",pr.a);
    print_all(*pr.next);
}

int main()
{

    struct self_ref var1,var2,var3,var4;

    var1.a = 5;
    var1.next = &var3;/// 1 is linked with 3.
    var2.a = 6;
    var2.next = &var4;/// 2 is linked with 4.
    var3.a = 9;
    var3.next = &var2;/// 3 is linked with 2.
    var4.a = 0;

    print_all(var1);///After calling var1,pr becomes equal to var1.(pr = var1).

    return 0;
}

