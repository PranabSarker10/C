///FUNCTION BASIC(Parameter_list)
///The type of a value which is got from a function is called return_type.
/**
    return_type        => Liquid matter.
    function_name      => Blander(working).
    argument_list      => Mango.
    return_value       => Juce of Mango.
///Function means which works.
///In any C program at least one function must be present.
///Returning more than one is impossible in a function. we can return nothing or one in a function.
**/
#include<stdio.h>
///Program:1 .All other program will be treated as a comment.
void print (int a,int b)
{
    printf("%d\n",a+b);
}

int main()
{
    print(5,6);
    return 0;
}



///Program:2 .All other program will be treated as a comment.
//int print (int a, int b)///As we want to get int_type so we must use int(not void).
/////Here (int a, int b) is not limited, we can use more than that.
//{
//    return a+b;
//}
/////This is the work of parameter_list.
//int main()
//{
//    //print(5,6);
//    printf("%d\n",print(5,6));
//    return 0;
//}
/////Here the work of parameter_list is passing int a & int b in main function.



//int power(int n, int pow)///As we want to get int_type so we must use int(not void).
/////Here (int a, int b) is not limited, we can use more than that.
//{
//    int mult=1,i;
//
//    for(i=1;i<=pow;i++)
//    {
//        mult = mult * n;
//    }
//        return mult;///Here return is not meaned to print.
//
//}
/////This is the work of parameter_list.
//int main()
//{
//    int ans;
//    ans = power(2,3);    //print(5,6);
//    printf("%d\n",ans);
//    return 0;
//}
/////Here the work of parameter_list is passing int a & int b in main function.
/////WE SHOULD PRACTISE TO MAKE PROGRAM BY USING FUNCTION.
