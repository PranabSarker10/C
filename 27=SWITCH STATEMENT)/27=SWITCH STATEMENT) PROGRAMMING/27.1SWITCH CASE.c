#include<stdio.h>
int main()
{
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    /*precaution:
    If we don't use break, then after a case being truth all the cases and default will be printed.
    */

    switch(number)
    {
        case 10:
            printf("The number is:10\n");
        break;
        case 9:
            printf("The number is:9\n");
        break;
        case 8:
            printf("The number is:8\n");
        break;
        default:
            printf("Unknown\n");
    }

    return 0;
}

