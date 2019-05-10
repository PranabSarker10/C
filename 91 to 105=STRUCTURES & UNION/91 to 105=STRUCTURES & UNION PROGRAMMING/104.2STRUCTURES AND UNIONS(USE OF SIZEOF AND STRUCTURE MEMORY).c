///Structures and unions(use of sizeof and structure memory)
///Sizeof is a function which is used to find size.
///Ex:Integer takes 2 bytes. In new version of codeblocks it takes 4 bytes.
#include<stdio.h>
struct mystructure
{
    int a;
    float b;
    double d;
    char c;///If we make this comment,the result will be 16.
///We think that int=4,float=4,double=8,char=1. So result will be 4+4+8+1=17. But the result will be 24 as it multiples by double 8.
///Thats why after 16 it won't be 17. It will be 24.
};
///Remember: Result will be multiple of the most large datatype.

int main()
{
    int Total;
    struct mystructure obj;
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(char));
    Total = sizeof(int)+sizeof(float)+sizeof(double)+sizeof(char);
    printf("Total will not be:%d\n",Total);

    printf("As it multiples by double=8,so total will be:%d withot being 17 after 16.\n",sizeof(obj));
    return 0;
}

