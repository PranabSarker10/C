///File Management(Advanced Modes read, write, append)
///The work of read mode is to read a data from a file.
///The work of write mode is to write a data in a file. Here the previous data is lost.
///The work of append mode is to write a data in a file. Here the previous data is not lost. The new data is printed after the previous data.
///r+,w+,a+

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1;
    char str[100];

    fp=fopen("new.txt","a+");
    fp1=fopen("new.txt","a+");


    fscanf(fp1,"%s",str);
    printf("%s\n",str);///Here from the new.txt file Bangladesh is taken and printed.
    fprintf(fp,"Bangladeshi\n");

    fclose(fp);
    fclose(fp1);

    return 0;
}
