///sample input        sample output
///    RUET                 RUET
///  RAJSHAHI             RAJSHAHI
///    2014                 2014
#include<stdio.h>
int main()
{
    char ch[100];
///If terminating condition is given we can use EOF or not use EOF.Here terminating condition is given.
///But if terminating condition is not given we have to use EOF.

//    while(gets(ch)) //we can also write:   while(scanf("%s",ch)!=EOF)
//    {
//        printf("%s\n",ch);
//    }
///But our program is not needed to terminate by EOF. It needs that if we press enter without taking input, it will terminate. But using scanf we cannot do that. Because scanf will not take new line(\n).

///So we should apply this method.
    while(gets(ch))
    {
        if(ch[0]=='\0')
            return 0;
        printf("%s\n",ch);
    }
    return 0;
}
