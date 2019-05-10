#include<stdio.h>
int main()
{
    int number;

        switch(number)
        {
           case number>=80:
               printf("A+");

           case number>=75:
               printf("A");

           case number>=70:
               printf("A-");

           case number>=65:
               printf("B+");

           case number>=60:
               printf("B");

           case number>=55:
               printf("B-");

           case number>=50:
               printf("c");

           case number>=45:
               printf("c-");

           case number>=40:
               printf("D");

           default:
               printf("Fail");
        }
        return 0;
}
