///File Management(file input output functions)

///fprintf fscanf, fwrite fread, putc getc, fputs fgets

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[100] = "PARNA";
    char str2[100];

    fp = fopen("Newfile.txt","w");///Here write(w) is for fputs.

    //fprintf(fp,"%s",str);
    //fscanf(fp,"%s",str2);///The string2 is taken from the file.
    //printf("%s",str2);
    fputs(str,fp);///Here the 1st is character array and the 2nd is file pointer(fp).
    fclose(fp);
///Remember: The black output screen is console and the white out put screen is file.
    return 0;
}
