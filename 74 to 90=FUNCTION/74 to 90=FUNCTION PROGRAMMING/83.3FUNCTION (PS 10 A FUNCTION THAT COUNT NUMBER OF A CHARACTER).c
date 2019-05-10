///Create a function that count the number of a character (given in input) in a string.
/**
    Sample input        Sample output
     PRANAB A                 1
     PRANAB Z                 0
*/
#include<stdio.h>
int count(char arr[], char ch)
{
    int i,cnt=0;
    for(i=0;arr[i]!='\0';i++)
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

    while(scanf("%s%*c%c%*c",str,&c)!=EOF)
///Use of *c for ignoring the enter/space.
    {
        printf("%d\n",count(str,c));
    }

    return 0;
}
