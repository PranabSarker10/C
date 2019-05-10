///File management(intro)
/**We have to know:
  1.How to create file
  2.How to read file
  3.How to write in file
  4.How to save file
**/

/**
Two mode is present in a file.
1.Read mode
2.Write mode
**/
#include<stdio.h>
#include<stdlib.h>///This function is used for file management.

int main()
{
    FILE *fp;///This pointer will work to read,write,manipulate and close the file.

    fp=fopen("new.txt","w");///By writing fopen we will access the previous file or will create a new file.
    printf("This is test file printf\n");///For codeblock's runbutton printf is used to print something.
    fprintf(fp, "This is test file fprintf\n");///For file fprintf function is used to print something.
///Remember: If we open file, we have close file.
    fclose(fp);
    return 0;
}
