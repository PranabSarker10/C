///Preprocessor (all in one)

///#if #else #elif #endif ///These are used for checking condition.
///#ifdef #ifndef #undef
///##
#include<stdio.h>

int main()
{
    #if 5>9///After pressing enter #endif // 5  is autometically shown.
    printf("YES");///Don't worry. This is false, so the color is dim.
    #else
    printf("NO");///Don't worry. This is true, so the color is bright.
///Remember: If we write #if, #endif must be written.
    #endif // 5

    return 0;
}
