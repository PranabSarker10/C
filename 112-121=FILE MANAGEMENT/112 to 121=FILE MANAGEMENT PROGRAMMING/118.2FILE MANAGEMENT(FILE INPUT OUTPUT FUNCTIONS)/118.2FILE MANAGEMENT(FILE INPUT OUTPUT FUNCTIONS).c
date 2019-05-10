///File Management(file input output functions)

///fprintf fscanf, fwrite fread, putc getc, fputs fgets

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[100] = "PARNA";
    char str2[100];

    fp = fopen("Newfile.txt","r");

    //fprintf(fp,"%s",str);
    fscanf(fp,"%s",str2);///The string2 is taken from the file.
    printf("%s",str2);

    fclose(fp);

    return 0;
}
