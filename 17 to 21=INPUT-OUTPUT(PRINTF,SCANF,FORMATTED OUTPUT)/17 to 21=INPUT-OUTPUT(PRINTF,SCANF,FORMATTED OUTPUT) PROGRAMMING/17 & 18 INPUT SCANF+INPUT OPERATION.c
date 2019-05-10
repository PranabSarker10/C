//Input sacnf
//Input operation
#include<stdio.h>
int main()
{
    int a=5,b=6,x,y,sum,m,c,d,E,i,j,k,l,day,month,year;//This two integer will take 4+4=8 bytes
    float n;
    printf("a=%d and the address of a is %d\n",a,&a);//The address will be at the 1st place of 4 places of 4 bytes.And next three places will be empty.
    printf("b=%d and the address of b is %d\n",b,&b);//The address will be at the 1st place of 4 places of 4 bytes.And next three places will be empty.

    printf("Enter two numbers:\n");
    /*
    By scaning two numbers if we input 3 numbers it will print only the 1st two numbers
    we can't print any scan-related number before scan that.If we print then it will show garbage value.
    */
    scanf("%d %d",&x,&y);
    printf("sum=%d\n",x+y);

    printf("Please enter an integer and an floating point number\n");
    scanf("%d %f",&m,&n);//Here take four number.
    printf("The two numbers are:%d and %f\n",m,n);//Last two will not be printed.

    printf("Please enter an integer of five numbers:\n");
    scanf("%3d",&c);//Here take five number.
    printf("%d\n",c);//Here 1st three will be printed

    scanf("%d",&c);//After getting this scanf it will print the last two input.
    printf("%d\n",c);


    printf("Please enter another integer of four numbers and typing space enter two integer number:\n");
    scanf("%3d",&d);
    printf("%d\n",d);//Here 1st three will be printed.

    scanf("%3d",&d);//After getting this scanf it will try to print the last three input.But as space is typed after four numbers so it will print the last one of four.
    printf("%d\n",d);

    scanf("%3d",&d);//After getting this scanf it will print the last two.
    printf("%d\n",d);
    /* NOTE:
    The after parts of space typing will not be printed.
    */


    printf("Please enter an integer of five numbers and typing space enter another integer of five numbers:\n");
    scanf("%3d",&E);
    printf("%d\n",E);//Here 1st three will be printed.

    scanf("%d",&E   );//After getting this scanf it will try to print the last inputs.But as space is typed after four numbers so it will print the last one of four if we use printf after scanf. Here we need not to print.
    //printf("%d\n",d);


     scanf("%3d",&E);
    printf("%d\n",E);//Here 1st three after space will be printed.

    scanf("%d",&E);//After getting this scanf it will try to print the last inputs.Here we need not to print.
    //printf("%d\n",d);

    printf("ANOTHER SHORTCUT METHOD\n\n");

    scanf("%3d %d %3d %d",&j,&i,&k,&i);
    printf("%d %d",j,k);


    printf("\nAGAIN ANOTHER SHORTCUT METHOD\n");

    scanf("%3d %*d %3d %*d",&j,&k);
    printf("%d %d\n",j,k);

    printf("\nERROR FOUNDING\n");

    scanf("%3d %*d %3d %*d",&j,&k,&l);// Take 8 inputs like: 24 34 34 23 <- that
    printf("%d %d %d\n",j,k,l);


    printf("\nDAY MONTH YEAR\n");

    scanf("%d %d %d",&day,&month,&year);
    printf("%d-%d-%d",day,month,year);

    return 0;
}


