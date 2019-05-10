///Bitwise operator
//&=and     |=or     ^=exclusive or         <<=Left shift        >>=Right shift
#include<stdio.h>
int main()
{
    int a=2,b=4;
    printf("%d %d %d %d %d\n",a&b,a|b,a^b,a<<2,a>>1);
    return 0;
}
/*
1 BYTE = 8 bits
*/
//Here a sequence: 1024 512 256 128 64 32 16 8 4 2 1
/*                                                  ------------------------------------------------------------------------------------------- |
//Here a&b operation : 0,1=0; 0,0=0; 1,0=0; 1,1=1; |Here left side of = indicates the elements to operation and right side indicates the result.|
//Here a|b operation : 0,1=1; 0,0=0; 1,0=1; 1,1=1; |Here left side of = indicates the elements to operation and right side indicates the result.|
//Here a^b operation : 0,1=1; 0,0=0; 1,0=1; 1,1=0; |Here left side of = indicates the elements to operation and right side indicates the result.|
                       --------------------------

                       8Z                                  ||
                                  \/
                Here this four's highest value is 3

            |-----------------------------------------------|
            |     |     |     |     |     |     |     |     |
            |-----------------------------------------------|
                                             ^     ^     ^                                   3
                                  If there:  |     |     |  => this 3 bits are taken then (2)  - 1 will be the highest value.

//Here a>>1 means a=2 will be a=1 by going rightside for one-time.
//Here a<<2 means a=2 will be a=8 by going leftside for two-times.
*/
