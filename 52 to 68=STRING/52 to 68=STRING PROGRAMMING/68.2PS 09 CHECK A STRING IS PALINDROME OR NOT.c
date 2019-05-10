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

///Remember: 68.2 is more efficient than 68.1.
///68.2 needs short memory and time is saved.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int ln,i,half,ck;
    while(scanf("%s",str)!=EOF)
    {
        ln = strlen(str);
        half = ln/2;
        ln = ln-1;
        ck = 1;
        for(i=0;i<half;i++)
        {
            if(str[i]!=str[ln-i])
            {
                ck = 0;
                break;
            }
        }


        if(ck)
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

