///Function
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int sumdouble(int a,int b)
{
    return sum(a,b)+sum(a,b);
}
int main(void)///Here using "void" and "int main()" is a good practise. But if we don't use "void" and "int" before "main" the compiler of code-block will accept it.
{
    printf("%d",sumdouble(5,6));
    return 0;///Here if we delete return 0 it will not effect in the program. But without it we will get compile error in programming contest.
}
