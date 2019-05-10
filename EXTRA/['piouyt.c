#include<stdio.h>
int main()
{
    char n1[100],n2[100];
    int i;
    while(scanf("%s%s",n1,n2)!=EOF)
    {
        for(i=0;;i++)
        {
             if(strlen(n1)>strlen(n2) && n1[i]>n2[i])
             {
                 printf("a > b\n");
             }

             else if(strlen(n1)<strlen(n2) && n1[i]<n2[i])
             {
                 printf("a < b\n");
             }
        }
        if(strcmp(n1,n2)==0)
            printf("a = b\n");

        else if(strcmp(n1,n2)>0)
            printf("a > b\n");

        else
            printf("a < b\n");
    }
    return 0;
}

