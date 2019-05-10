///File Management(File with function)
///This program is for reading a string from the file.
///We use argument as parameter and file as return type.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char file_name[100];
void file_rename(char *new_name)
{
    strcpy(file_name,new_name);
    strcat(file_name,".txt");
}

FILE *create(char *mode)
{
    FILE *fp;
    fp = fopen(file_name,mode);
    return fp;
}

void file_write (FILE *fp)
{
    fprintf(fp,"%s\n",file_name);
}

void file_print(FILE *fp)
{
    char str[100];
    fscanf(fp,"%s",str);
    printf("%s\n",str);
}


int main()
{
    FILE *fp;
    file_rename("new");
    fp = create("r");
    file_print(fp);
    fclose(fp);

    return 0;
}
