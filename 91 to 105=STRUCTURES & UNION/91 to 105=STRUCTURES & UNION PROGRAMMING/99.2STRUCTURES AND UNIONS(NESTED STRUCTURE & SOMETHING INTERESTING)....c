#include<conio.h>///conio.h=constant input output.header
#include<stdio.h>

int main()
{
    char ch;
    ch = getchar();
    putchar(ch);
    ch = getch();///Here data is processed so quickly before putchar(ch) not wait to print it.
///IF WE MAKE THE BELOW STATEMENT UNCOMMENT IT WILL TAKE THE INPUT AND TERMINATE THE OUTPUT(IT WILL NOT SHOW ANY OUTPUT).
    ///putchar(ch);

    return 0;
}
