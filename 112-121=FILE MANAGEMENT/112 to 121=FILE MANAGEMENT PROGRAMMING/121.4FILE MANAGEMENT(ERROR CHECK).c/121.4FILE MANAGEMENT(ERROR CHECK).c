///File Management(Error check)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("new.txt","w");
    fp = fopen("new.txt","r");
    getc(fp);
    if(feof(fp))///feof is used when file is finished only by reading.
///Remember:End of file is not an error.
        printf("End of file");
    fclose(fp);

}
