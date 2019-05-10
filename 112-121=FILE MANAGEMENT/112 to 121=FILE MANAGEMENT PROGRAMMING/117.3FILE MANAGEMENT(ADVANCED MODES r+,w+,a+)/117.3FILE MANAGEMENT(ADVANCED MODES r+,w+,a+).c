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
///Here as it is opened in append mode so for first execution "Bangladesh" will be printed in the new.txt file. And after that, for all execution newly "Bangaldesh" will be printed from the end of 1st "Bangladesh".
    fprintf(fp,"Bangladesh\n");///Here Bangladesh is printed in output file.
    fscanf(fp1,"%s",str);
    printf("%s",str);///Here for 1st execaution garbage value will be printed(as for 1st nothing is presented in the new.txt file). Then after all execution Bangladesh will be printed compare with the new.txt file.

    fclose(fp);
    fclose(fp1);

    return 0;
}
