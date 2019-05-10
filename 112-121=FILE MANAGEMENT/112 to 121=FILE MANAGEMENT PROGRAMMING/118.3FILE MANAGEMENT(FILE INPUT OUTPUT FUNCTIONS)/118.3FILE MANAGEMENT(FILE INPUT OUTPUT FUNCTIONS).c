///File Management(file input output functions)

///fprintf fscanf, fwrite fread, putc getc, fputs fgets

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[100] = "PARNA";
    char str2[100];

    fp = fopen("Newfile.txt","w");///Here write(w) is for putc.

    //fprintf(fp,"%s",str);
    //fscanf(fp,"%s",str2);///The string2 is taken from the file.
    //printf("%s",str2);
    putc(str[0],fp);///Here two things are presented. One the character I needed and another the pointer.
    fclose(fp);
///Remember: The black output screen is console and the white out put screen is file.
    return 0;
}
