///File Management (EOF)

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *faccepted,*fcheck;
    int a,b;

    faccepted = fopen("acoutput.txt","r");///This works to make all printf->fprintf.
    fcheck = fopen("output.txt","r");///This works to make all scanf->fscanf.

    while(fscanf(faccepted,"%d",&a)!=EOF)///Here the value of EOF is -1.
    {
        fscanf(fcheck,"%d\n",&b);
        if(a!=b)
        {
            printf("Wrong answer\n");
            return 0;
        }
    }
    printf("Accepted\n");

    fclose(faccepted);
    fclose(fcheck);
///Remember:If we change the value in acoutput file, the program will print wrong answer.
    return 0;
}
