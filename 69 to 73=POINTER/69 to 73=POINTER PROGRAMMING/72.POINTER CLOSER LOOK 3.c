#include<stdio.h>
int main()
{
    int *p,*q;
    int x,y;

    int arr[100];
    int *s;


    p = &x;///Address
    x = 5;

    y = *p;
    printf("%d\n",y);

    y = *(&x);
    printf("%d\n",y);


    q = &(*(&x));///Here (*(&x)) means x. So, q pointed address of x=(&x).
    printf("%d\n",*q);



    q = &(*(&x));
    *p = 6;
    printf("%d\n",*q);///As p = q =&x and *p=*q=x.




    printf("%d %d\n",arr,&arr[0]);


    scanf("%d",&arr[0]);
///Remember: arr = &arr[0]

    s=arr;

    printf("%d\n",*s);

    return 0;
}
