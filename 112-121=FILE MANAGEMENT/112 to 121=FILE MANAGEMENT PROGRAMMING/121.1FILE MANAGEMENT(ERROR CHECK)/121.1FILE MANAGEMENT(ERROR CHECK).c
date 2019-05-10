///File Management(Error check)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("new.txt","r");///Here file is not presented but we want to open file in read mode. It's an error. We won't use this.
    perror("ERROR");///Perror function shows the error.
    fclose(fp);
    perror("ERROR");///Invalid argument means, we are not using the file to work.
}
