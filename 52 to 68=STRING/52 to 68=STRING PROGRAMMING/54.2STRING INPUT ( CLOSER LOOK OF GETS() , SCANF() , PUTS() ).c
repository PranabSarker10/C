#include<stdio.h>
int main()
{
    char str[100];


///Now continue the operation only for 1.Here all other printf & scanf will be treated as a comment.
///1
    gets(str);
    printf("%s\n",str);


    gets(str);
    printf("%s\n",str);


    gets(str);
    printf("%s\n",str);



///Now continue the operation only for 2.Here all other printf & scanf will be treated as a comment.
///2
//
//    scanf("%s",str);
//    printf("%s\n",str);
//
/////Here after the input of scanf the enter will be inputed in the next gets() as a new line(null character).
/////Here between %s and \n no character is present so nothing will be printed.
///Remember in string, before \n all is inputed in scanf and \n is inputed in the next gets.
//    gets(str);
//    printf("%s\n",str);
//
//
//    gets(str);
//    printf("%s\n",str);


///Now continue the operation only for 3.Here all other printf & scanf will be treated as a comment.
///3
//    gets(str);/// input enter.
//    printf("%s\n",str);
//
//
//    gets(str);/// input enter.
//    printf("%s\n",str);
//
//
//    gets(str);///input enter.
//    printf("%s\n",str);
//



///In integer(%d) \n will not be inputed in the gets() before the scanf. To repair that the following method can be applied.

///Now continue the operation only for 4.Here all other printf & scanf will be treated as a comment.
///4
//    scanf("%s%*c",str);/// input enter.
//    printf("%s\n",str);


//    gets(str);/// input enter.
//    printf("%s\n",str);


//    gets(str);///input enter.
//    printf("%s\n",str);

    return 0;
}
