///File Management(file input output functions)

///fprintf fscanf, fwrite fread, putc getc, fputs fgets

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[100] = "PARNA";
    char str2[100];

    fp = fopen("Newfile.txt","r");///Here read(r) is for fgets.

    //fprintf(fp,"%s",str);
    //fscanf(fp,"%s",str2);///The string2 is taken from the file.
    //printf("%s",str2);
    fgets(str2,4,fp);///Here the 1st is character array and the 2nd is file pointer(fp).
///Here 4 means 3 characters and one null character.
    printf("%s",str2);
    fclose(fp);
///Remember: The black output screen is console and the white out put screen is file.
    return 0;
}
