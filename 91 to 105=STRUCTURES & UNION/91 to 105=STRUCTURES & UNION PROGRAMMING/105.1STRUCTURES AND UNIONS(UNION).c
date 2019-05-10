///Structurs and unions ( union )
///The main difference between structure and union is in stroing variables. And by analyzing this we can identify whrn structure and when union should be used.
///The use of union is less then structure.
///Elements of a structure are presented in different places but elements of a union are presented in same places.
///Remember: Union needs less memory than Structure.
/**
STRUCTURE:
     -------------------------------
    | | | | | | | | | | | | | | | | |
     -------------------------------
     _______________ _______ _
            8           4    1

///AS in structure,size is defined by the multiple of the large datatype. So for double=8 it will take 16 bytes.
Advantages:
We can work by taking all the elements of a structure.
Disadvantages:
It takes more memory than union.
________________________________________________________________________________________________________________
UNION:
     ---------------
    | | | | | | | | |
     ---------------
     _______________
           8
     _______
        4
     _
     1

 ///Here in union, all datatypes is present in double=8 bytes.
Advantages:
We can't work by taking all the elements of a Union. Before finishing the work of a element,we can't use another element.
Because if we take another element without finishing the first one than the before-element will be destroyed.(As in 8 bytes all elements are assigned)
Disadvantages:
It takes less memory than structure.

**/
# include<stdio.h>

struct mystructure
{
    double a;
    int b;
    char c;
};
///If it is needed to work by taking 3 elements at the sametime then then structure will be used.
///In structure,size is defined by the multiple of the large datatype. Here mystructure will take 16 bytes.
union myunion
{
    double a;
    int b;
    char c;
};



union u
{
    int arr[100];
    double a;
    int b;
    char c;
};



union un
{
    struct mystructure my;
    double a;
    int b;
    char c;
};


int main()
{
    printf("%d\n",sizeof(union myunion));
///The size of a datatype is bigger in union will be shown here.
    printf("%d\n",sizeof(struct mystructure));


    printf("NOW IF WE EXECUTE UNION U THEN IT WILL BE THE LARGEST ELEMENT     (int arr[100]=400)\n");
    printf("%d\n",sizeof(union u));


    printf("NOW IF WE EXECUTE UNION UN THEN IT WILL BE THE LARGEST ELEMENT (struct mystructure my=16)\n");
    printf("%d\n",sizeof(union un));


    return 0;
}
