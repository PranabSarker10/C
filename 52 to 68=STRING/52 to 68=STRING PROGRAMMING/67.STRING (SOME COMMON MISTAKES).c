///Some common mistakes
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];/// Here 9 characters can be kept and one character is fixed for '\0'. More than this can create problems.
///Reason:Suppose 10 friends want to travelling in a train without any ticket. They decide that they will collect them in the train. Then if sufficient seats are free to sit, they can buy the tickets.
///Like that: If we take str[10] and want to take input more than nine(one is null character) than it depends on Miracle or Perdu/invisible.
///For this reason we will get "RUN TIME ERROR" in programming contest.
    scanf("%s",str);
    printf("%s\n",str);
/**
REMEBER: Two mistakes

1.scanf("%s",&str);///Using & is a mistake here. As it is a string.
2.scanf("%s",str[10]);///Using str[10] is a mistake. we should use str.

**/
    return 0;
}
