//Relational operator
//> >= < <= == !=
//Logical operator
//&& || !
/*For 2 conditions 4 kinds of combination is possible.Like:
------------------------------------------------------------|---------|
Condition 1 | Condition 2 |     &&    |    ||    |!(for c1) |!(for c1)|
------------|-------------|-----------|----------|----------|---------|
     1      |      1      |      1    |     1    |    0     |    0    |
------------|-------------|-----------|----------|----------|---------|
     1      |      0      |      0    |     1    |    0     |    1    |
------------|-------------|-----------|----------|----------|---------|
     0      |      1      |      0    |     1    |    1     |    0    |
------------|-------------|-----------|----------|----------|---------|
     0      |      0      |      0    |     0    |    1     |    1    |
------------|-------------|-----------|----------|----------|---------|

REMEMBER: ! works like as the opposite of a real condition.
*/
/* When a statement becomes true it prints 1.
Again when a statement becomes false it prints 0.*/
#include<stdio.h>
int main()
{
    int a=6, b=7, c,physics=5, math=5, ck;

    c=(a>b);
    printf("%d\n",c);
    c=(a<b);
    printf("%d\n",c);
    c=(a==b);
    printf("%d\n",c);
    c=(a!=b);
    printf("%d\n",c);

    ck= math==5 && physics==5;
    printf("\n\n%d\n",ck);
    ck= math==6 || physics==5;
    printf("%d\n",ck);
    ck= math==6 && physics==5;
    printf("%d\n",ck);
    ck= !(math==5);
    printf("%d\n",ck);
    return 0;
}

