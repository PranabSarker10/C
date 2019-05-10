#include<stdio.h>
#include<string.h>
int main()
{
    char n1[100],n2[100];
    while(scanf("%s%s",n1,n2)!=EOF)
    {
        while(n1[0]!=0 && n2[0]!=0)
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
        if(n1[0]==0 && n2[0]==0)
        {
            printf("Not possible");
        }
    }
    return 0;
}
