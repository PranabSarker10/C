///File Management(Error check)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("new.txt","w");///Here for this a file is created. And so (!fp) is not true.
    fp = fopen("new.txt","r");
    if(!fp)
        perror("ERROR");///Perror function shows the error.

    fclose(fp);

}
