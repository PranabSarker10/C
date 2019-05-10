///File Management(file input output functions)

///fprintf fscanf, fwrite fread, putc getc, fputs fgets
///Remember:If we want to make a project by using structure then fwrite and fread is needed.
#include<stdio.h>
#include<stdlib.h>

struct mystructure
{
    char name[20];
    char stu_id[20];
    char address[30];
};

int main()
{
    FILE *fp;
    struct mystructure in ={"Pranab","143024","Mymensingh-Rajshahi"};
    struct mystructure out;

    char str[100] = "Pranab";
    char str2[100];

    fp = fopen("Newfile.txt","r");///Here read(r) is for out.
    fread(&out,sizeof(in),1,fp);///1st the address of the structure, 2nd the place(bytes), 3rd the number of writing,forth pointer(fp).
    printf("%s",out.address);
    fclose(fp);

///Remember: The black output screen is console and the white out put screen is file.
    return 0;
}
