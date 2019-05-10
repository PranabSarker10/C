#include<stdio.h>
int main()
{
    char s1[100],s2[100];
///Process : All other process will be teated as comment.
///1:
    int i=0;
    scanf("%s",s1);

    while(1)
    {
        s2[i]=s1[i];

        if(s1[i]=='\0')///Here break is under the condition of if. And i++ is under the condition of else.
        break;
        i++;
    }

    printf("%s",s2);
    return 0;
///Another process : All other process will be teated as comment.
///2:
//    int i=0;
//    scanf("%s",s1);
//
//    while(s1[i]!='\0')
//    {
//        s2[i]=s1[i];
//
//        i++;
//    }
//
//    s2[i]=s1[i];
//
//    printf("%s",s2);
//    return 0;
///Another process : All other process will be teated as comment.
///3:
//    int i;
//    scanf("%s",s1);
//
//    for(i=0;s1[i]!='\0';i++)
//    {
//        s2[i]=s1[i];
//
//    }
//
//    s2[i]=s1[i];//Here it is needed. Because without it,garbage value will be showed.
//
//    printf("%s",s2);
//
//    return 0;



///Another process : All other process will be teated as comment.
///4:
//    int i;
//    scanf("%s",s1);
//
//    for(i=0;s1[i]!='\0';i++)///when s1[1]=='\0' then without copying the null character into s2, it will break the loop.
//    {
//        s2[i]=s1[i];
//
//    }
//
/////Here s2[i]=s1[i]; is needed. Because without it,garbage value will be showed.
/////The reason: Without s2[i]=s1[i]; null character is not copied from s1 to s2.
//    printf("%s",s2);
//
//    return 0;
}
