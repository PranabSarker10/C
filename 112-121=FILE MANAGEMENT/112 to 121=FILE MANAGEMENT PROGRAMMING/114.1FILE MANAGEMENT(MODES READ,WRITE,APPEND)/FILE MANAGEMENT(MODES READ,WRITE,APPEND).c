///File management(Modes read,write,append)
///If I want to continue read and write both in one then the part of (write code) must be written before the part of (read code).
#include<stdio.h>
int main()
{
    FILE *fp;
    int n;

    fp = fopen("Newfile.txt","w");///For write "w" must be written.
    scanf("%d",&n);
    fprintf(fp,"%d\n",n);///For writing mode of file.
    fclose(fp);///Here is the ending. So, the next part will start from free.


    fp = fopen("Newfile.txt","r");///For read "r" must be written.
    fscanf(fp,"%d",&n);///For reading mode of file.
    printf("%d\n",n);
    fclose(fp);///Here is the ending.

    return 0;
}
