#include<stdio.h>
int main()
{
    char str [10]="RAJSHAHI";//Here 9 characters are present. The last char str[8] = '\0'.

    char ch [100]="PARNA RANI PAUL";

    int ln,i,length;

    i=0;

    while(str[i]!='\0')
    {
        i++;
    }

    ln=i;

    printf("%d\n",ln);


///Here is  another process by using for loop.

    for(length=0;ch[length]!='\0';length++);//Here without any statement the loop is finished.

    printf("%d\n",length);//Here with space 15 character will be printed.

    return 0 ;
}
