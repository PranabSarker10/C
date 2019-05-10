#include<stdio.h>
int main()
{
    char ch[100];

    int a=7,b=6;
    int c=7,d=7;


    gets(ch);
    printf("%s\n",ch);


    gets(ch);
    puts(ch);//Here puts means printf.And it automatically takes a new-line.



    gets(ch);
    printf("%8.3s\n",ch);
/*
---------------------------------
|   |   |   |   |   |   |   |   |     =>Here if we take INPUT: wicket** ,
---------------------------------                 then OUTPUT: *****wic     (* means blank).


Here if we take INPUT: BANGLADESH ,
          then OUTPUT: *****BAN     (* means blank).
*/


    gets(ch);
    printf("%*.*s\n",a,b,ch);


    gets(ch);
    printf("%*.*s\n",c,d,ch);//If we take input='WRITING' & b=7 or 8, it will start printing from the first block.

    return 0;
}
