///Loop starting(goto sattement)///
#include<stdio.h>
int main()
{
    int a=1;
    start://indicates starting point
    printf("%d\n",a);
    a++;//it indicates that one-time the condition will be false so loop will stop.
    if(a<=7)
        goto start;//By this statement it will goto start and again continue loop until the condition becomes false
    return 0;
}
