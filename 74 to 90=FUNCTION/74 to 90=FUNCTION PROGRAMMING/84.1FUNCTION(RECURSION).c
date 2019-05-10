///AT FIRST WATCH THE 84 NO. IMAGE.
//Function(Recursion)
///Recursion=When a function personally calls itself in the function than it is called recursion.
///5!=5*4*3*2*1 or 5*4!.
///n!=n*(n-1)!.///Here foctorial of n is calling a factorial of (n-1). That is to say, factorial calls a factoial.
///Here we will apply the same procedure in (n-1)! which is used to find n!. But we have to take a default(pre-selected) value at the last otherwise the program will be endless(infinty).
///Works:
/**
1.Code can be write shortly and easily.
2.Tuff works can be done easily.
*/

///Two laws:
/**
1.BY WHICH PROCEDURE WE WILL GET THE VALUE OF FACTORIAL 5, USING THE SAME PROCEDURE WE WILL GET THE VALUE OF FACTORIAL 4. IN FACT SAME FUNCTION WILL CALL SAME FUNCTION.
2.WE WILL GIVE A FUNCTION AT LAST FOR WHICH A FUNCTION WILL NOT CALL ANOTHER FUNCTION. IN FACT THEN IT WILL GET A CONSTANT VALUE.
*/
///REMEMBER: we have to come to the terminating point from the starting point. Like as n!-> n(n-1)! -> n(n-1)(n-2)! ->.....->  0!. Not n!->n(n+1)!.
///When we will apply recursion:
/**
     {    1      if n = 0
f(n)={
     { n*f(n-1)    else


soln:
-----
int Factorial(int n)
{
   if(n==0)
    return 1;
   else
    return n*Factorial(n-1);
}

*/


#include<stdio.h>
int Factorial(int n)
{
   if(n==0)
    return 1;
   else
    return n*Factorial(n-1);
}
int main()
{
    printf("AT FIRST WATCH THE 84 NO. IMAGE.\n");
    printf("%d",Factorial(5));
    return 0;
}
