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
    fseek(fp,2,1);///fp=pointer,2=moving number,0=position before moving.
    fseek(fp,2,1);
///The 1st fseek function moves 2 position from the current position and the next seek function again moves 2 position from the then current position.
    fseek(fp,-1,1);///This back to one position left from Pranab's "ab". And printed "nab".
    fscanf(fp,"%s",str);
///Here after scanf up-downing line is presented at the last.
    puts(str);
    fseek(fp,-2,1);///Here it backs 2 position left from the last.
    fscanf(fp,"%s",str);
    puts(str);

    fclose(fp);

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
2 = Reading from the last position.

**/

    return 0;
}
