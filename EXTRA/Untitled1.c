#include<stdio.h>

int main()
{
    char ch;
    printf("enter a character:\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'D':
        case 'O':
        case 'u':
        case 'U':
        printf("\n%c is vowel",ch);
        break;
        default:
        printf("\n%c is a consonent",ch);

     }
	return 0;

}

