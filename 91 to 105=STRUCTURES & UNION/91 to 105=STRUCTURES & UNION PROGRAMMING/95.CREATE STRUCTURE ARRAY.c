#include<stdio.h>
#include<string.h>
struct CSE_14///Here string(name),int(student_id),double(cgpa) all are member of a structure.
{
    char name[20];
    int student_id;
    double cgpa;
};
void print(struct CSE_14 student[])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Student name : %s\n",student[i].name);
        printf("Student Id : %d\n",student[i].student_id);
        printf("Student cgpa : %.2lf\n",student[i].cgpa);
    }
}

int main()
{
    struct CSE_14 student[10];///Student array
    int i;

    for(i=0;i<10;i++)
    {
        scanf("%s %d %lf",&student[i].name,&student[i].student_id,&student[i].cgpa);
    }
    print(student);
    return 0;
}
