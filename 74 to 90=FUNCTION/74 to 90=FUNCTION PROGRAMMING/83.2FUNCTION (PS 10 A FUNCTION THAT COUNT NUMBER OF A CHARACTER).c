///Create a function that count the number of a character (given in input) in a string.
/**
    Sample input        Sample output
     PRANAB A                 1
     PRANAB Z                 0
*/
#include<stdio.h>
#include<string.h>
int count(char arr[], char ch)
{
    int ln,i,cnt = 0;
    ln = strlen(arr);
    for(i=0;i<ln;i++)
    {
        if(arr[i]==ch)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{

    char str[100],c;

    scanf("%s %c",str,&c);///Use of space between %s and %c can solve this problem.
    {
        printf("%d\n",count(str,c));
    }



    scanf("%s%*c%c%*c",str,&c);///Use of *c for ignoring the enter/space.
    {
        printf("%d\n",count(str,c));
    }

printf("NOW FOR EOF CASE.\n");

    while(scanf("%s%*c%c%*c",str,&c)!=EOF)
///Use of *c for ignoring the enter/space.
    {
        printf("%d\n",count(str,c));
    }

    return 0;
}

