///PS 09 - Check a string is palindrome or not .
/**
Sample input:

     madam
     did
     good

Sample output:

     palindrome
     palindrome
     not palindrome

**/
///1.Teminating condition is given & 2.Terminating condition is not given => Both case using EOF is a good practise.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int ln,i,j;
    while(scanf("%s",str)!=EOF)
    {
        ln = strlen(str);
        j=0;
        for(i=ln-1;i>=0;i--)
        {
            rev[j]=str[i];
            j++;
        }
        rev[j]='\0';

        if(strcmp(str,rev)==0)
        {
            printf("palindrome\n");
        }
        else
        {
            printf("not palindrome\n");
        }
    }

    return 0;
}
