///Loop example 02///
//Take n integers as input and print their sum
#include<stdio.h>
int main()
{
    int i,j,num,sum=0;
    printf("Enter a number:\n");
    scanf("%d ",&num);

    for(i=1;i<=num;i++)
       {
           scanf("%d",&j);
///NOTE:After %d of scanf we won't use space. It disturbs program.

           sum=sum+j;


       }
    printf("\nsum=%d\n",sum);






    printf("MULTIPLICATION using loop\n");

    sum=1;//Here if we use 0, the sum will always print 0. Because (0*something=0).//

    printf("Enter a number:\n");
    scanf("%d ",&num);

    for(i=1;i<=num;i++)
       {
           scanf("%d",&j);
///NOTE:After %d of scanf we won't use space. It disturbs program.

           sum=sum*j;


       }
    printf("\nsum=%d\n",sum);
    return 0;
}
