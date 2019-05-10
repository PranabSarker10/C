///File Management(Random access function)

///fseek = By using this we can read and write a data from anywhere. From the up downing line(may be kirsof) it will start writing. In read mode, the up-downing line is stayed in the first position.
///Remember = The procedure of moving the up-downing line(kirsof) is determined by fseek function. Mainly the position of pointer is changed(means randomly access).
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("new.txt","w");///Write mode creates new data. If previous data is present, it deletes that and creates new data.
    fprintf(fp,"Pranab");
    fclose(fp);

    return 0;
}
