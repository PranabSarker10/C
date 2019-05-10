/**
String functions:

1.strlen(str);
2.strcpy(str1,str2);
3.strncpy(str1,str2,n);
4.strcat(str1,str2);
5.strncat(str1,str2,n);
6.strcmp(str1,str2);
7.strncmp(str1,str2,n);
8.strcoll(str1,str2);

**/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="MYMENSINGH";
    char str1[100]="RUET",str2[100]="RAJSHAHI",str3[100]="PILOT",str4[100]="RAJSHAHI",str5[100]="PARNA",str6[100]="PRANAB";
    char ch1[100]="DHAKA",ch2[100]="BUET",ch3[100]="KUET",ch4[100]="KHULNA",ch5[100]="RUET",ch6[100]="RAJSHAHI";
    char cm1[100]="BCD",cm2[100]="XYZ",cm3[100]="BCD",cm4[100]="BAZ",cm5[100]="BBB",cm6[100]="BBB";
    char cmn1[100]="BBD",cmn2[100]="BBB";

    char col1[100]="RUET",col2[100]="RAJSHAHI",col3[100]="RAJSHAHI",col4[100]="RUET",col5[100]="RUET",col6[100]="RUET";

    printf("%d\n",strlen(str));

    strcpy(str1,str2);
    printf("%s\n",str1);///Here rajshahi will be printed.

    strncpy(str3,str4,3);///Here 1st 3 letters of str4 will replace the 1st 3 letters of str3.
    printf("%s\n",str3);


    strncpy(str5,str6,3);///Here 1st 3 letters of str6 will replace the 1st 3 letters of str5.
    str5[3]='\0';
    printf("%s\n",str5);

    strcat(ch1,ch2);
    printf("%s\n",ch1);


    strcat(ch3," ");
    strcat(ch3,ch4);
    printf("%s\n",ch3);


    strncat(ch5,ch6,3);
    printf("%s\n",ch5);


   // strcmp(cm1,cm2);
    printf("%d\n",strcmp(cm1,cm2));///Here cm1 and cm2 is compared. For 1st case B & B are same.For 2nd case C<Y so -1 will be returned.

    printf("%d\n",strcmp(cm3,cm4));///Here cm3 and cm4 is compared. For 1st case B & B are same.For 2nd case C>A so 1 will be returned.

    printf("%d\n",strcmp(cm5,cm6));///Here cm5 and cm6 is compared. Every case are same so 0 will be returned.

    if(strcmp(cm5,cm6)==0)
    {
        printf("They are same\n");
    }

    if(!strcmp(cm5,cm6))///Here strcmp(cm5,cm6) this function will return 0 and !0 = 1(Truth).
    {
        printf("They are same\n");
    }

    printf("%d\n",strncmp(cmn1,cmn2,2));///Though 3rd case is not right but 1st and 2nd case are right. So after comparing 0 is printed.


    if(!strncmp(cmn1,cmn2,2))
    {
            printf("They are same\n");
    }

///REMEMBER: Here comparing of the two strings will be occured serially(LETTER BY LETTER). In this search when two letters are found disimillar then the dicision is taken.
    printf("%d\n",strcoll(col1,col2));

    printf("%d\n",strcoll(col3,col4));

    printf("%d\n",strcoll(col5,col6));
///REMEMBER: Strcmp function is more faster than strcoll. So, we should use strcmp function.
///                                                                        _
///strcoll function local is useful to declare some local variable(like as e).
    return 0;
}
