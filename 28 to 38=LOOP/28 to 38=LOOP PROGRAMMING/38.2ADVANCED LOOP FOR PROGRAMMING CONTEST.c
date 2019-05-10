///Advanced loop for programming contest///
///Should be careful for wrong answer
#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("Now use of if-else statement to terminate the loop:\n");
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)//For this the program is terminated. without termination the program will be time limit exceeded
            return 0;
        sum=a+b;
        printf("sum=%d\n",sum);
    }
    return 0;
}

