///File Management(file input output functions)

///fprintf fscanf, fwrite fread, putc getc, fputs fgets
///Remember:If we want to make a project by using structure then fwrite and fread is needed.
#include<stdio.h>
#include<stdlib.h>

struct mystructure
{
    char name[20];
    char stu_id[20];
    char address[20];
};

int main()
{
    FILE *fp;
    struct mystructure in ={"Pranab","143024","Mymensinhg-Rajshahi"};
    struct mystructure out;

    char str[100] = "PARNA";
    char str2[100];

    fp = fopen("Newfile.txt","w");///Here write(w) is for printing something in file.
    fwrite(&in,sizeof(in),1,fp);///1st the address of the structure, 2nd the place(bytes), 3rd the number of writing,forth pointer(fp).
    fclose(fp);


///Remember: The black output screen is console and the white out put screen is file.
    return 0;
}
