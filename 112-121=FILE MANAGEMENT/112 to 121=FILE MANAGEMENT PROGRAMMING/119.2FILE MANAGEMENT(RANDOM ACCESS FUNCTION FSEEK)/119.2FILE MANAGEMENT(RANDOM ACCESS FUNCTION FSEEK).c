///File Management(Random access function)

///fseek = By using this we can read and write a data from anywhere. From the up downing line(may be kirsof) it will start writing. In read mode, the up-downing line is stayed in the first position.
///Remember = The procedure of moving the up-downing line(kirsof) is determined by fseek function. Mainly the position of pointer is changed(means randomly access).
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("new.txt","w");///Write mode creates new data. If previous data is present, it deletes that and creates new data.
    fprintf(fp,"Pranab");
    fclose(fp);

    fp = fopen("new.txt","r");
    fseek(fp,2,0);///fp=pointer,2=moving number,0=position before moving.
/**
Remember:
THE 1ST POSITION:
fp = Pointer.
THE 2ND POSITION:
2 = Move to 2 position in the right.
-2 = Move to 2 position in the left.
THE 3RD POSITION:
0 = The starting of file.
1 = The current position.
2 =

**/
    fscanf(fp,"%s",str);
    puts(str);

    fclose(fp);

    return 0;
}
