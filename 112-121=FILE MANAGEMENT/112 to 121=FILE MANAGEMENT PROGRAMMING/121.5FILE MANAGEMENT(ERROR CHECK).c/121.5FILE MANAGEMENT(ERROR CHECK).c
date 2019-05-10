///File Management(Error check)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("new.txt","w");
    fp = fopen("new.txt","r");
    getc(fp);
    if(ferror(fp))///As there everything is right so no error is found.
        printf("Error found");
    fclose(fp);

}
