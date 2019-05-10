#include<stdio.h>
int main()
{
    char str [100];

///Now continue the operation only for 1.Here all other printf & scanf will be treated as a comment.
///1
    scanf("%[a]",str);
///Take 3 inputs one by one and show the output.
///Input 1:a   Input 2:b   Input 3:aab.
    printf("%s",str);


///Now continue the operation only for 2.Here all other printf & scanf will be treated as a comment.
///2
//    scanf("%[a-z]",str);
///Take input rueT. Here rue(small letters) will be printed.
//    printf("%s",str);


///Now continue the operation only for 3.Here all other printf & scanf will be treated as a comment.
///3
//    scanf("%[a-z ]",str);
///Take input ruet rajshahi. Here ruet rajshahi will be printed.
//    printf("%s",str);


///Now continue the operation only for 4.Here all other printf & scanf will be treated as a comment.
///4
//    scanf("%[a-z]",str);
///Take input ruet rajshahi. Here ruet will be printed.
//    printf("%s",str);


///Now continue the operation only for 5.Here all other printf & scanf will be treated as a comment.
///5
//    scanf("%[^a]",str);
///Take 2 inputs one by one and show the output.When a will be found,it will stop executing the a and before all of a.
///Input 1:bat;  Input 2:b.ahat
//    printf("%s",str);
    return 0;
}
