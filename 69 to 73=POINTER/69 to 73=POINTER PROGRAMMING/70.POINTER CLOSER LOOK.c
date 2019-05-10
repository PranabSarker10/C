#include<stdio.h>
int main()
{
    int x,y;
    int a,b;
    int c,d;
    int *p,*q;///Here *p and *q will point integer. Which integer will be pointed that is not given.
    int *r,*s;
    int *t,*u;


    p = &x;///It will print the address of x;
    q = &y;
///Remember: p=&x,q=&y; *p=x,*q=y;
    r = &a;
    s = &b;
///Remember: r=&a,s=&b; *r=a,*s=b;
    t = &c;
    u = &d;
///Remember: t=&c,u=&d; *t=c,*u=d;


    x = 5;
    y = 7;
    a = 3;
    b = 6;
    c = 9;
    d = 1;


    printf("%d %d %d %d\n",*p,x,*q,y);
    y = 8;
    printf("%d %d %d %d\n",*p,x,*q,y);

    printf("%d %d %d %d\n",*r,a,*s,b);
    *r = *s;
    printf("%d %d %d %d\n",*r,a,*s,b);

    printf("%d %d %d %d\n",*t,c,*u,d);
    t = u;
    printf("%d %d %d %d\n",*t,c,*u,d);
    c=12,d=15;
    printf("%d %d %d %d\n",*t,c,*u,d);
///Remember: As we don't make *t=*u so at t=u it will be 1 9 1 1. Here 9 is not change because c is not changed.
/**
             101
|-----|     |-----|
| t   |     | c   |
|-----|     |-----|

             201
|-----|     |-----|
| u   |     | d   |
|-----|     |-----|


*/
    return 0;
}
