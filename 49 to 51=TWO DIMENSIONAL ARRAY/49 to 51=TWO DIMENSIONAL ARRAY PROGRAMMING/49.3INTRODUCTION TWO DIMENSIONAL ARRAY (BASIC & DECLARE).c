#include<stdio.h>
int main()
{

    int array2d[5][5]={
    {76,67,86,57,56},
    {45,94,66,75},//As we don't take any number in the fifth position so if we want the output of the fifth position it will print 0.
    {67,57,47,87},
    {65,57,67,97},
    {65,57,43,97}
    };

    printf("%d",array2d[1][3]);

    return 0;

}
