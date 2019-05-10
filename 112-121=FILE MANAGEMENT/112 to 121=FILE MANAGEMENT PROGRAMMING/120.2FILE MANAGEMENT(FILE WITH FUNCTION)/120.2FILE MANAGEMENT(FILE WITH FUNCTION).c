///File Management(File with function)
///This program is for writing the name of the file.
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

int main()
{
    FILE *fp;
    file_rename("new");
    fp = create("w");
    file_write(fp);
    fclose(fp);

    return 0;
}
