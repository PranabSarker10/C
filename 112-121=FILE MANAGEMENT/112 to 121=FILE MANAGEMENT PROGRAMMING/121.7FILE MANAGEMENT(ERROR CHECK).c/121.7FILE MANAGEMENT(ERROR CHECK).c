///File Management(Error check)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("new.txt","w");///Opening write mode and want to read it is an Error.
    getc(fp);
    if(ferror(fp))
        printf("Error found");

    clearerr(fp);///This function is used for clearing error. Here for this, Error found is not shown for two times.

    if(ferror(fp))
        printf("Error found");
    fclose(fp);

}
