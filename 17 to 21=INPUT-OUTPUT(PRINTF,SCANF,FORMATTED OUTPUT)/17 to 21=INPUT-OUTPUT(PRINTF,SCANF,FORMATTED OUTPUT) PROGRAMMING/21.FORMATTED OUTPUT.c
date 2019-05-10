//FORMATTED OUTPUT
/*
%5d=123         ->                                             blank   blank      1        2         3
                  |-------------------------------------------------------------------------------------|
                  |      |      |        |        |         |       |        |        |        |        |                             |
                  |-------------------------------------------------------------------------------------|
%-5d=123        ->                                               1       2        3      blank     blank
%-5d%-5d=123 456->    1      2       3      blank     blank      4       5        6      blank     blank
%05d=123        ->                                               0       0        1        2         3
%010d=123       ->    0      0       0        0         0        0       0        1        2         3
%6.2f=12.0      ->                                    blank      1       2        .        0         0
Here %6.2f means total 6 places and after (.) 2 places.
*/
#include<stdio.h>
int main()
{
    printf("%d\n",12345);
    printf("%5d\n",12345);
    printf("%-5d\n",12345);
    printf("%3d\n",1234567);//Here as we used %d so aqurate value will not be changed. Though %3d ia used.
    printf("%-3d\n",12345);
    printf("%2d\n",12345);
    printf("%5d\n",123);
    printf("%-5d\n",123);
    printf("%-5d%-5d\n",123,567);
    printf("%05d\n",12345);
    printf("%05d\n",123);
    printf("%010d\n",123);
    printf("%-05d\n",123);
    printf("%-05d%-05d\n",123,435);
    printf("%5f\n",12.0);
    printf("%.5f\n",12.0);
    printf("%.2f\n",12.0);
    printf("%6.2f\n",12.0);
    printf("%*.*f\n",6,2,12.0);//Here by pressing * we can fix the input
    printf("%*.*f\n",10,2,12.0);
    printf("%10.*f\n",2,12.0);
    printf("%10.*f\n",4,12.0);
    return 0;
}
