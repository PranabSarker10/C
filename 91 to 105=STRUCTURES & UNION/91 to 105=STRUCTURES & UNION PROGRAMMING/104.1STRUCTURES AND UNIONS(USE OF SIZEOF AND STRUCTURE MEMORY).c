///Structures and unions(use of sizeof and structure memory)
///Sizeof is a function which is used to find size.
///Ex:Integer takes 2 bytes. In new version of codeblocks it takes 4 bytes.
#include<stdio.h>
struct mystructure
{
    int a;
    float b;


} ;

int main()
{
    int a;
    struct mystructure obj;
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(short int));
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(obj));
    printf("%d\n",sizeof(struct mystructure));
    return 0;
}
