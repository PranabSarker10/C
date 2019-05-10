/**sample input:      sample output:

       4

       CUET               RUET
       KUET               BUET
       BUET               KUET
       RUET               CUET

**/

#include<stdio.h>
int main()
{
///String is a one dimensional character array.
///So, String array is a two dimensional character array.
    char str[10][100];///char str[n= 10(0 to 9) = Max how much string][100(0 to 99 with null character. Without null character the range will be 99) = Range of every string]
    int n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("%s\n",str[i]);
    }

    return 0;
}
