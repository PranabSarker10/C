///File management(Modes read,write,append)
#include<stdio.h>
#include<stdlib.h>///This function must be used.
int main()
{
    FILE *fp;


    fp = fopen("Newfile.txt","a");///For append "a" must be written. In append the previous file will be present.
///Remember: The Notepad name must be written in the program.Here Newfile.txt is written.
    fprintf(fp,"\nThis is new file and the mode is append.\n");
    fclose(fp);///Here is the ending.
///In Append,if somthing is written in the notepad before, the new line will be printed after that.
///In Append,if somthing is not written in the notepad before, the new line will be printed in the notepad.
    return 0;
}
///Another Important Speech: The increasing number of runtime will increase the output in notepad.
