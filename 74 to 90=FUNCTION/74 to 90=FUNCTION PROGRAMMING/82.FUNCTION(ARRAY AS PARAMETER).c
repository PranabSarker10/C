///Function(Array as parameter)
#include<stdio.h>
///1:ALL OTHER WILL BE TREATED AS A COMMENT.
/**
void abc(int arr1[])
{

     printf("In abc Function arr[3] = %d\n",arr1[3]);
}


int main()
{
    int arr[5] = {1,2,3,7,5};
    printf("In main Function arr[3] = %d\n",arr[3]);

    abc(arr);///If I want to send the full array I shouldn't write arr[...] here. We should write arr.

    return 0;
}
*/

/**
///2:ALL OTHER WILL BE TREATED AS A COMMENT.
///clearance of local variable:
void abc(int arr1[])
{
   int a=6;/// Here a is a local variable of abc function.
///But remember if we change the index's value of an array then it will also be changed in the main function.
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int a = 5;/// Here a is a local variable of main function. So it will not work in abc function.

    abc(arr);
///Here for sending address the value is also changed.
///Here for sending arr in arr1 the change of something in arr1 will change thing in arr.
    printf("%d",a);

    return 0;
}
*/

/**
///2:ALL OTHER WILL BE TREATED AS A COMMENT.

void abc(int arr1[])
{
    printf("Before change in abc Function arr[3] = %d\n",arr1[3]);//2nd this.
    arr1[3]=100;
    printf("After change in abc Function arr[3] = %d\n",arr1[3]);//3rd this.
}

int main()
{
    int arr[5]={1,2,3,7,5};

    printf("Before change in abc Function arr[3] = %d\n",arr[3]);//At first this line will be excuted.
    abc(arr);
    printf("After change in abc Function arr[3] = %d\n",arr[3]);//4th this. Here as arr1 was changd in abc function so arr of main function is changed.

    return 0;
}
*/


///2:ALL OTHER WILL BE TREATED AS A COMMENT.

void abc(int arr1[][10])///Remember:We can declare 2 dimensional array in this two ways.=> int arr1[][10],int arr1[3][10].Not in this two ways =>int arr1[][],int arr1[3][].
{
    printf("Before change in abc Function arr[4][2] = %d\n",arr1[4][2]);//2nd this.
    arr1[4][2]=100;
    printf("After change in abc Function arr[4][2] = %d\n",arr1[4][2]);//3rd this.
}

int main()
{
    int arr[5][10];///Remember:We can declare 2 dimensional array in this two ways.=> int arr1[][10],int arr1[3][10].Not in this two ways =>int arr1[][],int arr1[3][].
    arr[4][2] = 4;

    printf("Before change in abc Function arr[4][2] = %d\n",arr[4][2]);//At first this line will be excuted.
    abc(arr);
    printf("After change in abc Function arr[4][2] = %d\n",arr[4][2]);//4th this. Here as arr1 was changd in abc function so arr of main function is changed.

    return 0;
}
