///Header file math.h
///sin,cos,tan,asin,acos,atan,sinh,cosh,tanh
///exp,log,log10,pow,sqrt,fmod
///fabs,labs,floor,ceil
///Remember:
///1.angles must be in radian.
///These function's parameter take double value and return double value.
///asin,acos,atan means sin inverse,cos inverse,tan inverse.
///sinh means hyperbolic sin.
#include<stdio.h>
#include<math.h>
int main()
{
    double a = sin(1.5),pi;
    pi=2*acos(0);
    printf("%lf\n",pi);

    printf("%lf\n",sin(0.0));///1.angles must be in radian.
    printf("%lf\n\n",sin(1.5));///1.angles must be in radian.

    printf("%lf\n\n",asin(a));///asin means sin inverse.

    printf("%lf\n\n",sinh(1.5));

    printf("%lf\n\n",exp(1));///exp(1) means e^1.
///Here log means general log.
    printf("%lf\n",log(1));
    printf("%lf\n",log(0));///log 0 is infinity.
    printf("%lf\n",log(2));
///Here log10 means 10 base log.
    printf("%lf\n",log10(2));
    printf("%lf\n\n",log10(100));///It means which power of 10 is needed to be hundred.
///Because 2*log10(10) = 2. [2*log 10 base 10]

    printf("%lf\n\n",pow(2,3));///pow(1st one is base, last one is power).

    printf("%lf\n\n",sqrt(16));///sqrt means the squre-root of a function.

    printf("%lf\n",fmod(4,5));///fmod means the modulus(remainder).
///Here 4 can't be divided by 5 so remainder is 4.
    printf("%lf\n",fmod(5,5));
    printf("%lf\n",fmod(10,5));
    printf("%lf\n\n",fmod(10.1,5));
///The advantage of that function is: we can get the float or double value from it.

    printf("%lf\n",fabs(-4.5));///prints the absolute value of floating point number. I mean both case of '+' and '-', it will print '+' value.
    printf("%ld\n\n",labs(7));///prints the absolute value of long integer number. I mean both case of '+' and '-', it will print '+' value.

    printf("%lf\n",floor(4.4));///Here floor-function indicates the nearest small integer value of 4.4.
    printf("%lf\n\n",ceil(4.4));///Here ceil-function indicates the nearest big integer value of 4.4.
    return 0;
}
