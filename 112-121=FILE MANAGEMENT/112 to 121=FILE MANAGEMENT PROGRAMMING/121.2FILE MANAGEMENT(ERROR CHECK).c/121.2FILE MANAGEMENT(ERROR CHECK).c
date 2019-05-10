///File Management(Error check)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("new.txt","r");///Here file is not presented but we want to open file in read mode. It's an error. We won't use this.
    if(!fp)///Yes, this is not fp as write mode is not used to create a file.
///Here (!fp) is for file missing.
        perror("ERROR");///Perror function shows the error.

    fclose(fp);

}
