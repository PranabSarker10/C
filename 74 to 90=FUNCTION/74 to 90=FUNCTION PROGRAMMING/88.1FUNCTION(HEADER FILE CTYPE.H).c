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
    char ch;
    ch = getchar();
///For isprint function
    if(isprint(ch))///Is it printable or not? This is checked by the function.
///If printable say yes else say no.
    {
        printf("For isprint function.");
        printf("Yes\n");
    }
    else
    {
        printf("For isprint function.");
        puts("No\n");
    }




///For iscntrl function
    if(iscntrl(ch))///Is it printable or not? This is checked by the function.
///If printable say no else say yes.
    {
        printf("For iscntrl function.");
        printf("Yes\n");
    }
    else
    {
        printf("For iscntrl function.");
        puts("No\n");
    }




///For ispunct function
    if(ispunct(ch))///Is it punctuation or not? This is checked by the function.
///If punctuation say yes else say no.
    {
        printf("For ispunct function.");
        printf("Yes\n");
    }
    else
    {
        printf("For ispunct function.");
        puts("No\n");
    }





///For isspace function
    if(isspace(ch))///Is it space or not? This is checked by the function.
///If space say yes else say no.
///Here ctrl,shift,caps lock etc. someother don't input something. So at isspace function they print yes
    {
        printf("For isspace function.");
        printf("Yes\n");
    }
    else
    {
        printf("For isspace function.");
        puts("No\n");
    }



///For isalnum function
    if(isalnum(ch))///If "a to z" or "A to Z" or "0 to 9" then print Yes else print No.
    {
        printf("For isalnum function.");
        printf("Yes\n");
    }
    else
    {
        printf("For isalnum function.");
        puts("No\n");
    }





///For isalpha function
    if(isalpha(ch))///If "a to z" or "A to Z" then print Yes else print No.
    {
        printf("For isalpha function.");
        printf("Yes\n");
    }
    else
    {
        printf("For isalpha function.");
        puts("No\n");
    }





///For isdigit function
    if(isdigit(ch))///If "0 to 9" then print Yes else print No.
    {
        printf("For isdigit function.");
        printf("Yes\n");
    }
    else
    {
        printf("For isdigit function.");
        puts("No\n");
    }




///For islower function
    if(islower(ch))///If "a to z"(small alphabets) then print Yes else print No.
    {
        printf("For islower function.");
        printf("Yes\n");
    }
    else
    {
        printf("For islower function.");
        puts("No\n");
    }





///For isupper function
    if(isupper(ch))///If "A to Z"(small alphabets) then print Yes else print No.
    {
        printf("For isupper function.");
        printf("Yes\n");
    }
    else
    {
        printf("For isupper function.");
        puts("No\n");
    }

    return 0;
}
