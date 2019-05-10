///Preprocessor ( #include )
///include means add.

///For various reasons we have to create many projects. For including this projects preprocessor(#include) is very necessary.

///Sometimes we can copy .h=header file to main code file. But all time we cannot do that.

///#include<stdio.h>///Here stdio.header is included before main function. If we include something in a code, all of the included items have become the part of the coding.
///Remember:Angle Bracket(<>) is used only header file which is presented in library library.
///Remember:In own made header file double quotation("") is used.
#include"123.PREPROCESSOR(#INCLUDE).h"
int main()
{

    printf("%d\n",5);
    printf("%d\n",strlen("PRANAB"));
///Remember: Sometimes function of string can work without the presence of header file(Codeblocks gives this advantage). But it's not a good practise. And for that we will surely get error in programming contest.
    myf();

    return 0;
}
