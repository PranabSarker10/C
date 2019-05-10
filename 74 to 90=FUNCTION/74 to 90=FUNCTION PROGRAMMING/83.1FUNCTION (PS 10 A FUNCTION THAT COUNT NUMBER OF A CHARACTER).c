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
    printf("%d\n",count("pranab",'a'));
    printf("%d\n",count("pranab",'b'));
    printf("%d\n",count("pranab",'z'));

    while(scanf("%s%c",str,&c))///Here "str" is assigned in %s and "enter/space" is assigned in %c. As enter /space is not present in str so  '0' will be printed.
///Then again after starting loop "c" is assigned in %s and enter is assigned in %c. As enter is not present in c so 0 will be printed.
    {
        printf("%d\n",count(str,c));
    }
    return 0;
}
