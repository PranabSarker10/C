
///Structures and Unions(Nested structure & Something interesting)
///Structure decorates a program.
#include<stdio.h>
struct birthday///Here function is declared in global.
    {
        int day;
        int month;
        int year;
    };
struct IDENTITY
    {
        int male;
        int female;
    };

struct Student
{
    char first_name[50];
    char last_name[50];
    struct birthday birth;
    struct IDENTITY identity;
};
struct Teacher
{
    char first_name[50];
    char last_name[50];
    struct birthday birth;
    struct IDENTITY identity;
    int salary;
};

int main()
{
    struct Student PRANAB;
    char passck[50];
    char identityck[50];

    printf("Enter your first name : ");
    scanf("%s",&PRANAB.first_name);

    printf("Enter your last name  : ");
    scanf("%s",&PRANAB.last_name);

    printf("\nEnter your birthdate  : \n");
    printf("\tDay :");
    scanf("%d",&PRANAB.birth.day);
    printf("\tMonth:");
    scanf("%d",&PRANAB.birth.month);
    printf("\tYear :");
    scanf("%d",&PRANAB.birth.year);
    printf("Enter your identity (If male press m else press f) : ");
    scanf("%s",identityck);///If I take character then escaping space for(space & enter) is needed.
    if(strcmp(identityck,"m")==0 || strcmp(identityck,"M")==0)
    {
        PRANAB.identity.male = 1;
        PRANAB.identity.female = 0;
    }

    else if(strcmp(identityck,"f")==0 || strcmp(identityck,"F")==0)
    {
        PRANAB.identity.male = 0;
        PRANAB.identity.female = 1;
    }

    else
    {
        printf("You have pressed wrong key\n");
        return 0;///We can use "return exit" here but then using #include<stdlib.h> after #include<stdio.h> is a must.
    }



    printf("First Name : %s\n",PRANAB.first_name);
    printf("Last Name : %s\n",PRANAB.last_name);
    printf("Birthdate : %d / %d / %d\n",PRANAB.birth.day,PRANAB.birth.month,PRANAB.birth.year);
    printf("identity: ");
    if(PRANAB.identity.male==1)
    {
        printf("Male\n");
    }

    if(PRANAB.identity.female==1)
    {
        printf("Female\n");
    }

    return 0;
}
///By using this method we can find all data of a teacher including salary.
