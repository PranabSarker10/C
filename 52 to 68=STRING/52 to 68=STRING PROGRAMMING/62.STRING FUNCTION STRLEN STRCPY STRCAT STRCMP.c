#include<stdio.h>
#include<string.h>/// Remember at the time of declaring the string function strlen strcpy strcat strcmp  we have to use #include<string.h>
int main()
{
    char s1[20],s2[20],s3[20],s4[20];
    int ln,ck;

    scanf("%s",s1);

    ln=strlen(s1);///This function is used to find out the length of a string.

    printf("%d\n",ln);

    strcpy(s2,s1);///This function is used to find out the copy of a string.
///strcpy(where the string will be copied, The string which will be copied)
    printf("%s\n",s2);

    scanf("%s",s2);

    strcat(s1,s2);///This function is used to add two strings.
///strcat(The string,The string which will be add to the S1)
    printf("%s\n",s1);
    strcat(s1," ");///Here s1 is the s1 which is printed in the before line.
    strcat(s1,s2);
    printf("%s\n",s1);///Now between s1 and s2 a space will be printed.

    scanf("%s %s",s3,s4);

    ck=strcmp(s3,s4);///This function is used to compare between two string's.
///Here sequence need not to be maintained. Here strcmp(s3,s4) or strcmp(s4,s3) both are correct.
    if(ck==0)/// When ck==0, the two strings are SAME. This is a strange equation but remember this is true.
    {
        printf("SAME");
    }
    else
        printf("NOT SAME");

    return 0;
}
/**
A problem:
///123456789123456789123456789
///123456789123456789123456789

By using STRING,
      show,
      1.Which is small.
      2.Which is big.
      3.Both are same.
 Between this 3 statements which is true
      ??????
**/
