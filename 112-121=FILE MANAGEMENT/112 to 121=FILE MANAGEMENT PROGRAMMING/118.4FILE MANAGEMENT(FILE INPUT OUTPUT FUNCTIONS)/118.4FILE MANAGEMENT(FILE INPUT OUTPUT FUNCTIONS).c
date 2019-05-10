///File Management(file input output functions)

///fprintf fscanf, fwrite fread, putc getc, fputs fgets

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[100] = "PARNA";
    char str2[100];

    fp = fopen("Newfile.txt","r");///Here write(w) is for getc.

    //fprintf(fp,"%s",str);
    //fscanf(fp,"%s",str2);///The string2 is taken from the file.
    //printf("%s",str2);
    str2[0] = getc(fp);
    putchar(str2[0]);
    fclose(fp);
///Remember: The black output screen is console and the white out put screen is file.
    return 0;
}
