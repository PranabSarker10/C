///Advanced loop for programming contest///
///Should be careful for wrong answer
#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("Now use of END OF FILE(EOF) to terminate the loop:\n");
    while(scanf("%d %d",&a,&b)!=EOF)//For this the program is terminated. without termination the program will be time limit exceeded
/*
Here End of file will work if we press ctrl+z.
*/
    {
        sum=a+b;
        printf("sum=%d\n",sum);
    }
    return 0;
}


