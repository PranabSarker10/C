#include<stdio.h>
int main()
{
    char s1[15],s2[15];
    int ck,i;

    scanf("%s %s",s1,s2);

    ck=1;
    i=0;

    while(s1[i]!='\0' || s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            ck=0;
        }
        i++;
    }
    if(ck==1)
    {
        printf("Same\n");
    }
    else
    {
        printf("Not same\n");
    }

    return 0;
}
