#include<stdio.h>
int main()
{
   /// int a = 5;///Here 'int' is a datatype and 'a' is a variable.
   ///int *p = 5;///Here 'int *' is a datatype and p is variable. Here we want to take 5 as a address of p. But it many compiler won't support this.
   ///int x, *p = x;///It's impossible. Because I won't assign variable in address.
   ///int *p = &x,x;This process is problematic too. Because assigning x after *p=&x is not applicable.
   ///int x, *p = &x;This is a right process.

    int a,*pa=&a;
    char c,*pc=&c;
    float f,*pf=&f;
    double d,*pd=&d;

    int x=5,*p=&x;

    printf("%d %d %d %d\n",pc,pa,pf,pd);
    pa++;pc++;pf++;pd++;
    printf("%d %d %d %d\n",pc,pa,pf,pd);



    printf("%d %d %d\n",x,*p,p);
    (*p)++;
///Here the value of address 'p' is printed.
    printf("%d %d %d\n",x,*p,p);/// OUTPUT: 6 6 address.

    printf("%d %d %d\n",x,*p,p);
    *p++;
///Here the address of pointer 'p' is changed. The address of x has not changed. So it is fixed(6).
    printf("%d %d %d\n",x,*p,p);/// OUTPUT: 6 garbage address.

    return 0;
}
