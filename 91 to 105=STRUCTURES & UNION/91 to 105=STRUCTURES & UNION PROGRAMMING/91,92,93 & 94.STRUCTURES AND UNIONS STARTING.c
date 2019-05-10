///Structures and unions starting.....(Create a structure variable and use of structure member)...
/**
Datatypes(2):
1.Primititve datatypes: This is given.(Ex:Integer,Double,Float etc.)
2.User-define datatypes  : THis is created.(Ex:String,Array,Structure etc.)
*/
/**
    class
    student 10
    name, student_id, cgpa
*/
/**
NAMESORT:
     Pranab 024 4.00
     Srizon 005 3.90
     Tahsin 029 3.68

IDSORT:
     005 Srizon 3.90
     024 Pranab 4.00
     029 Tahsin 3.68

CGPASORT:
    4.00 Pranab 024
    3.90 Srizon 005
    3.68 Tahsin 029

*/
///Creating a new item using the same kinds of datatype means Array.
/**
    int Roll;
*/
///Creating a new item using many kinds of datatypes mean Structure.
///If we want we can create Structure by using same kinds of datatypes.
/**
    int Roll;
    char Name[50];
    float Cgpa;
*/
///If we use structure in main function it will be Local. So we create it outside of the main function thus it becomes global.
#include<stdio.h>
#include<string.h>
struct CSE_14///Here string(name),int(student_id),double(cgpa) all are member of a structure.
{
    char name[20];
    int student_id;
    double cgpa;

};
///Here Struct means I have created an integer type variable. Now I have to declare it.


int main()
{
///    struct CSE_14 student1,student2,student3;///For declaring each variable, it takes 32 bytes. But before declaring this variables it hasn't take any place.
///After all it takes place after creating variable not before that.
    struct CSE_14 student;
    ///Here (.)=>Dot means student is directed name.
    strcpy(student.name,"Pranab");
    student.student_id = 1;
    student.cgpa = 4.00;

    printf("Student name : %s\n",student.name);
    printf("Student Id : %d\n",student.student_id);
    printf("Student cgpa : %.2lf\n",student.cgpa);
    return 0;
}
