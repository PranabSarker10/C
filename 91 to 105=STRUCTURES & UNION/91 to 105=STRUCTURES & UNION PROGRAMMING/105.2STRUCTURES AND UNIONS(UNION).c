///Structurs and unions ( union )

# include<stdio.h>

struct mystructure
{
    double a;
    int b;
    char c;
};
union myunion
{
    double a;
    int b;
    char c;
};

int main()
{
    union myunion ob;
    ob.a = 2.3;
    ob.c = 'a';
    ob.b = 3;

    struct mystructure obj;
    obj.a = 2.3;
    obj.c = 'a';
    obj.b = 3;

    printf("FOR UNION: PROBLEM IS SEEN.  AS WE WANT TO USE MORE THAN ONE ELEMENT IN A FIXED PLACE OF DOUBLE=8 BYTES.\n");
    printf("Double:%lf\n",ob.a);
    printf("Int:%d\n",ob.b);
    printf("Char:%c\n",ob.c);

    printf("FOR STRUCTURE:NO PROBLEM IS SEEN.\n");
    printf("Double:%lf\n",obj.a);
    printf("Int:%d\n",obj.b);
    printf("Char:%c\n",obj.c);



    return 0;
}

