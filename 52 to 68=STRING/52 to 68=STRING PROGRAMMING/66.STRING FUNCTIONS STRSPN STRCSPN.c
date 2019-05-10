///String Function
/**
    strspn(str1,str2);///Indicates how much character are sequencially included.
    strcspn(str1,str2);///Indicates how much character are not included(sequencially).
///Remember: Both of the function returns integer.
///Remember: If present it will counted in strspn and if not present it will be counted in strcspn.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] = "my name is sharif";
    char str2[100] = "abcdefghijklmnopqrstuvwxyz";
    char str3[100] ="Pranab";
    char str4[100] ="aabbccDa";
    char str5[100] ="abcd";

    char cspn1[100]="aabbccDa";
    char cspn2[100]="abcd";
    char cspn3[100]="My name is Pranab";
    char cspn4[100]="ab";
    char cspn5[100]="My name is Pranab";
    char cspn6[100]="x";

    int len;
    len = strspn(str1,str2);///The first two letters of str1 are presented in str2. And then a space is found. So, 2 will be printed.
    printf("%d\n",len);

    len = strspn(str3,str2);///Here the 1st letter of Pranab is capital and which is not in str2. So 0 will be printed.
    printf("%d\n",len);

    len = strspn(str4,str5);///Here 6 will be printed.
    printf("%d\n",len);





    len = strcspn(cspn1,cspn2);///Here 0 will be printed. Present so will not be counted.
    printf("%d\n",len);

    len = strcspn(cspn3,cspn4);///Here 4 will be printed. As (M,y,space and n) is not present.
    printf("%d\n",len);

    len = strcspn(cspn5,cspn6);///Here 17 will be printed.As nothing is present in cspn6 from cspn5.
    printf("%d\n",len);

    return 0;
}
