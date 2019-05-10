#include<stdio.h>
#include<string.h>
struct CSE_14///Here string(name),int(student_id),double(cgpa) all are member of a structure.
{
    char name[20];
    int student_id;
    double cgpa;
};
void output(struct CSE_14 student[])
{
    int i;
    printf("***********OUTPUT************\n");
    for(i=0;i<10;i++)
    {
        printf("%d %s %.2lf\n",student[i].student_id,student[i].name,student[i].cgpa);
    }
}
void input(struct CSE_14 student[])
{
    int i;
    printf("***********INPUT************\n");
    for(i=0;i<10;i++)
    {
        scanf("%s %d %lf",&student[i].name,&student[i].student_id,&student[i].cgpa);
    }
}

void idsort(struct CSE_14 student[])
{
     int i,j;

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(student[i].student_id>student[j].student_id)
            {
                struct CSE_14 temp;
                strcpy(temp.name , student[i].name);
                temp.student_id = student[i].student_id;
                temp.cgpa = student[i].cgpa;


                strcpy(student[i].name , student[j].name);
                student[i].student_id = student[j].student_id;
                student[i].cgpa = student[j].cgpa;


                strcpy(student[j].name , temp.name);
                student[j].student_id = temp.student_id;
                student[j].cgpa = temp.cgpa;
            }
        }
    }
}
int main()
{
    struct CSE_14 student[10];///Student array
    input(student);

    idsort(student);
    output(student);

    return 0;
}

