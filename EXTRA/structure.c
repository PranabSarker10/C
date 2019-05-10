#include<stdio.h>
struct student
{
    char name[30];
    int roll,mark;
};
int main()
{
    struct student a[100];
    int  i,n;
    printf("How many students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i].name);
        scanf("%d",&a[i].roll);
        scanf("%d",&a[i].mark);
    }
    for(i=0;i<n;i++)
    {
    printf("name=%s roll=%d mark=%d\n",a[i].name,a[i].roll,a[i].mark);
    }
   return 0;
}
