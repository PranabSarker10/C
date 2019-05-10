#include<stdio.h>
#include<string.h>
int main()
{
    char n1[100],n2[100];
    while(scanf("%s%s",n1,n2)!=EOF)
    {
        if(strlen(n1)>strlen(n2))
             printf("a > b\n");
        else if(strlen(n1)<strlen(n2))
             printf("a < b\n");

        else if(strcmp(n1,n2)==0)
            printf("a = b\n");

        else if(strcmp(n1,n2)>0)
            printf("a > b\n");

        else
            printf("a < b\n");
    }
    return 0;
}
