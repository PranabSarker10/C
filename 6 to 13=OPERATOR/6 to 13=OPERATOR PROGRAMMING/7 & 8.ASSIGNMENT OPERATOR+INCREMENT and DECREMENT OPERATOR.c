/*Assignment operator
// = += -= *= /= %=
//If int a=5,b=6;
  Then a=b; and
       b=a; is not same.
  Here  a=b means b=6 and then a=6;
  Again when a=b is not written then b=a means a=5 and next b=5.
*/

/*Increment and Decrement operator
    ++    --
*/
#include<stdio.h>
int main()
{
    int a=3,b;
    a--;//decrement
    printf("%d\n",a);
    --a;//decrement
    printf("%d\n",a);
    b=a++;//1st a is assigned to b and then a is incremented
    //Here b=a & then a=b+1
    printf("%d %d\n",a,b);
    b=++a;//incremented a is assigned to b and then b is assigned to a
    //Here b=a+1 & then a=b
    printf("%d %d\n",a,b);
    printf("ANOTHER CLEARANCE FOR STRONG BASIC IS IN THE BELOW:\n");
    a+=b;
    //Here a=a+b & then b=b//Look here b is the last value of b//
    //we have to remember that the last value will be counted always
    printf("%d %d\n",a,b);
    b-=a;
    printf("%d %d\n",a,b);
    printf("AGAIN ANOTHER CLEARANCE FOR STRONG BASIC IS IN THE BELOW:\n");
    b=(++a)+(a++)+(--a);//We should not write in that way. Because then the answer varies from one compiler to another compiler.
    printf("%d %d\n",a,b);
    return 0;
}
