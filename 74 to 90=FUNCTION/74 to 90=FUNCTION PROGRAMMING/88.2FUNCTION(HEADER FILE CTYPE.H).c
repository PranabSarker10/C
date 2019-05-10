///Header file ctype.h=character type.h.
///works:
/**
1.Defining the type of a character.
2.Changing the type of a character.
*/
///    isprint,ispunct,isspace,iscntrl,
///    isalnum,isalpha,isdigit,islower,isupper
///    toascii,tolower,toupper
///works:
/**
1.The work of is-connected function is to check.
2.The work of to-connected function is to change.
*/
#include<stdio.h>
#include<ctype.h>///Always remember to use this function.
int main()
{
    char ch,ch1,ch2;
    int ascii;

    ch = getchar();


    ascii = toascii(ch);///The ascii value of the input item will be printed.
    printf("Ascii value:%d\n",ascii);

    ch1 = tolower(ch);
    printf("%c %c\n",ch,ch1);///The lower value of the input item will be printed.

    ch2 = toupper(ch);
    printf("%c %c\n",ch,ch2);///The upper value of the input item will be printed.

    return 0;
}
