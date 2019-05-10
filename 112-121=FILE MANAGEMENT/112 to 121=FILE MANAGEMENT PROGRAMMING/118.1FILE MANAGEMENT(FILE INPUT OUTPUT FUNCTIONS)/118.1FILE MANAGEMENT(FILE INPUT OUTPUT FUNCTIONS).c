///File Management(file input output functions)

///fprintf fscanf, fwrite fread, putc getc, fputs fgets

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[100] = "PARNA";
    char str2[100];

    fp = fopen("Newfile.txt","w");
    printf("%s",str);
    fprintf(fp,"%s",str);
    fclose(fp);

    return 0;
}
