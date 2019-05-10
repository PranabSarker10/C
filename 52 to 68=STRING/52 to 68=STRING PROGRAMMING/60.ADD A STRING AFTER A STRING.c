#include<stdio.h>
int main()
{
    char s1[15],s2[15];
    int ln,i;

    scanf("%s %s",s1,s2);
///process 1: All other process will be treated as a comment.
    for(ln=0;s1[ln]!='\0';ln++);//By using ; we have closed the loop without determining any statement.

    for(i=0;s2[i]!='\0';i++)
    {
        s1[ln+i] = s2[i];
    }
    s1[ln+i] = s2[i];

    printf("%s",s1);

    return 0;
///Another process:All other process will be treated as a comment.
//
//    for(ln=0;s1[ln]!='\0';ln++);//By using ; we have closed the loop without determining any statement.
//    s1[ln] = ' ';
//    ln++;
//
//    for(i=0;s2[i]!='\0';i++)
//    {
//        s1[ln+i] = s2[i];
//    }
//    s1[ln+i] = s2[i];
//
//    printf("%s",s1);
//
//    return 0;
}
