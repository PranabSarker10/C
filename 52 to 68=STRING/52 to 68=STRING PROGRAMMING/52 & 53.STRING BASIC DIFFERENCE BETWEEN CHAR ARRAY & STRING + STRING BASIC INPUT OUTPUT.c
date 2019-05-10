///The difference between string and character array is that string is a special kind of character array///
#include<stdio.h>
int main()
{
    char ch[10];
    int i=0;
    char cha[100]="RUET RAJSHAHI";

    ch[0] = 'R' ;
    ch[1] = 'U' ;
    ch[2] = 'E' ;
    ch[3] = 'T' ;
    ch[4] = 'e' ;
    ch[5] = 'f' ;
    ch[6] = 'g' ;
    ch[7] = 'h' ;
    ch[8] = '\0' ;
    ch[9] = 'i' ;
    printf("%d\n",ch[0]);
    printf("%c\n",ch[5]);
    printf("%s\n",ch);// As it get null character in ch[8] so it will stop printing that string after printing h.
    while(ch[i]!='e')
    {
        printf("%c",ch[i]);
        i++;
    }
    printf("\n%s\n",cha);
    printf("%c\n",cha[4]);//Here after RUET a character named space(empty place)will be printed.
    printf("%c\n",cha[5]);
    cha[4]='\0';
    printf("%s\n",cha);//As it get NULL CHARACTER at the fifth position(I mean cha[4]) so it will terminate the string after printing RUET.

///Remember after RUET "space" will be printed which is a character and after RUET RAJSHAHI a NULL CHARACTER will be printed which will terminate the string.///
    scanf("%s\n",cha);///Take input "RUET RAJSHAHI".
//Here & should not be used before cha as string itself indicates it's address.
///Remember when string gets space it terminates the string.///
///So if input is: "RUET RAJSHAHI" than the output will be:"RUET"......as it gets space after RUET.///
    printf("%s\n",cha);

    gets(cha);///Here RAJSHAHI will be printed if we take input: "RUET RAJSHAHI" on the previous scanf.///
    printf("%s\n",cha);
    printf("THE  NEXT  FOUR  LINES  INDICATE  THE  TWO  WAYS  WHERE  SPACE  WILL  NOT  TERMINATE   A   STRING.\n");
    gets(cha);//Take input "BUET DHAKA".
    printf("%s\n",cha);

    scanf("%[^\n]",cha);//Take input "KUET KHULNA".
    printf("%s\n",cha);
    return 0;
}
