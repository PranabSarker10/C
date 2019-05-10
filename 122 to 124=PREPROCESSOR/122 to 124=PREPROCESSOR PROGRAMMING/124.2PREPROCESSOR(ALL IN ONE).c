///Preprocessor (all in one)

///#if #else #elif #endif ///These are used for checking condition.
///#ifdef #ifndef #undef
///##
#include<stdio.h>

int main()
{
    #if 3>3
        printf(">");
    #elif 3==3 ///Means else if
        printf("=");
    #else
    printf("<");

    #endif // 5
///Remember: If we write #if, #endif must be written. #endif indicating the end of #if.
///Remember: Brightness is depended on true and false statement. True statement will be highlighted and false statement will be dimmed.
    return 0;
}
