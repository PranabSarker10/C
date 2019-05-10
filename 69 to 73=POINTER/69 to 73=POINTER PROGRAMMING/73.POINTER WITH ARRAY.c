#include<stdio.h>
int main()
{
    int arr[10]={2,4,1,7,4,3,9};
    int *p;
    char ch[] = "RUET";/// In datatype integer: we can declare by this process int arr[] = {1,2,3,4,5};
///We can declare it by using pointer =>char *ch = "RUET". But this is not a good practise.
    char str[100] = "RUET";
    char str1[100] = "RAJSHAHI";
    char *t;///Here the address of 'str' is taken by t and declared by *t.
/**
|-------------------------------------------------------------------------------|
|   2   |   4   |   1   |   7   |   4   |   3   |   9   |   0   |   0   |   0   |                                                     |                                                   |
|-------------------------------------------------------------------------------|
|       |       |       |       |       |       |       |       |       |       |
| arr[0]| arr[1]| arr[2]| arr[3]| arr[4]| arr[5]| arr[6]| arr[7]| arr[8]| arr[9]|
|       |       |       |       |       |       |       |       |       |       |
|-------------------------------------------------------------------------------|
|       |       |       |       |       |       |       |       |       |       |
|  *p   | *(p+1)| *(p+2)| *(p+3)| *(p+4)| *(p+5)| *(p+6)| *(p+7)| *(p+8)| *(p+9)|
|       |       |       |       |       |       |       |       |       |       |
|-------------------------------------------------------------------------------|
**/

///1: All others will be treated as a comment.
 //     p=arr;///If p = &arr[5] then it will address arr[5].
 //     printf("%d %d\n",*p,*(p+1));

///2: All others will be treated as a comment.
 //     p=&arr[5];///If p = &arr[5] then it will address arr[5].
 //     printf("%d %d\n",*p,*(p+1));

///3:All others will be treated as a comment.
 //     p=arr;
 //     *(p+5) = 7;
 //     printf("%d\n",arr[5]);

    printf("%s\n",ch);


    strcpy(str,str1+5);
    printf("%s\n",str);


    t = strcpy(str,str1+5);
    printf("%s\n",t);
    printf("%d %d\n",t,str);
    return 0;
}
