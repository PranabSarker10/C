///FUNCTION BASIC(Return_type)
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
void function1()///Here void means function will not return anything.
{
     printf("This is function1\n");///The process of making juce from mango.
     return;///Here this means it will return nothing. Remember return 0 means it will return 0(Not noyhing).
///Not using return; here is not a fault.
}

int main()
{
    function1();
    return 0;///Getting juce.
}
///Program:2 .All other program will be treated as a comment.
//int function1()
//{
//     printf("This is function1\n");
//     return 5;///If we write return 5.5, it will return 5. Because function1() integer_type.
//}
//
//int main()
//{
//    int a;
//    a = function1();
//    printf("%d\n",a);
//
//    return 0;
//}

