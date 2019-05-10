/**
There are two types of function.
1.Library function   : Never can be changed(Like as:BOOKS).Ex:Printf,scanf is present in #include<stdio.h>. Again string's function is present in #include<string.h>.
2.Userdefine function: I can change it.Ectually I have the power to copywrite it. I mean user can manipulate an userdefine function(Like as:My hand made notes).Ex: main() function=> Though its name can't be changed but its internal works can be changed.
If compiler define a function named Pranab then Pranab will be used and main function will not be needed.
*/
///Give a closure look on parameter_type,return_type and works of a function.


///Header file stdio.h=standard input output.header.
///printf(print or output),scanf(input),gets(string input),puts(string output),getchar(character input),putchar(character output)

#include<stdio.h>
int main()
{
    char str[100];
    char ch;
    gets(str);
    puts(str);
    ch = getchar();
    putchar(ch);

    return 0;
}
