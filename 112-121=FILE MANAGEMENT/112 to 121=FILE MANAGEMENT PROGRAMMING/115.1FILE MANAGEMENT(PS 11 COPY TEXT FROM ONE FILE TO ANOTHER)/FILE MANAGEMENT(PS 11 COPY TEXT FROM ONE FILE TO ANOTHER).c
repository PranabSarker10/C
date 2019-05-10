///Ps 11 (copy text from one file to another)
///Write something in a file (name file1.text)
///Copy all text from file1 to another file (named file2.txt)
/**
We can't open one file simultaneously on read and write mode.
At first, It should be opened on write mode than closing(saving) it we have to open it on read mode.
**/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1,*fp2;
    char ch[100];

    fp = fopen("file1.txt","w");
    scanf("%s",ch);
    fprintf(fp,"%s",ch);
    fclose(fp);
/**REMEMBER:::::::::
The next part needs to be treat as a comment at first.
Then making the next part uncomment and the previous part as a comment we will run the program.
At last making the whole program uncomment, we have to run the whole program.
**/
    fp1 = fopen("file1.txt","r");
    fp2 = fopen("file2.txt","w");

    fscanf(fp1,"%s",ch);
    fprintf(fp2,"%s",ch);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
