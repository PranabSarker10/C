///Structures and Unions(Nested structure & Something interesting)
///Structure decorates a program.
#include<stdio.h>

struct create_account
{
    char first_name[50];
    char last_name[50];
    char username[50];
    char password[50];
    struct birthday
    {
        int day;
        int month;
        int year;
    }birth;///Here birth is declared to use in int main() function.
    struct IDENTITY
    {
        int male;
        int female;
    }identity;///Here birth is declared to use in int main() function.
};
void pass_gen(char pass[])
{
    int i=0;
    char ch;

    while(1)
    {
        ch = getch();
        if(ch==13)
            break;
        putchar('*');
        pass[i++] = ch;
    }
    pass[i] = '\0';
}


int main()
{
    struct create_account PRANAB;
    char passck[50];
    char identityck[50];

    printf("Enter your first name : ");
    scanf("%s",&PRANAB.first_name);

    printf("Enter your last name  : ");
    scanf("%s",&PRANAB.last_name);

    printf("Enter your username   : ");
    scanf("%s",&PRANAB.username);

    printf("\nEnter your password   : \n");
    pass_gen(PRANAB.password);

    printf("\nRepeat your password  : \n");
    pass_gen(passck);

    if(strcmp(PRANAB.password,passck)!=0)
    {
        printf("Do not match password....\n");
        return 0;
    }

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
    printf("User Name : %s\n",PRANAB.username);
    printf("Password : %s\n",PRANAB.password);
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
