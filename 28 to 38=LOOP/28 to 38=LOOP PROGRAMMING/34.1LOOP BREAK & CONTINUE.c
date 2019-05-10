///Loop break & continue///
///break
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=5;i++)
    {
        printf("%d ",i);
    }

    printf("\nNow using break statement the result is:\n");
    for(i=0;i<=5;i++)
    {
        printf("%d ",i);
        break;
    }

    printf("\nAgain using break statement (if i==3) the result is:\n");


    for(i=0;i<=5;i++)
    {
        printf("%d ",i);
        if(i==3)
        break;
    }



    printf("\nAgain.....(if i==3) & break are used before printf:\n");

     for(i=0;i<=5;i++)
    {
        if(i==3)
        break;
        printf("%d ",i);
    }



    printf("\nAgain.....(if i==3) is used before printf:\n");


     for(i=0;i<=5;i++)
    {
        if(i==3)
        printf("%d ",i);

        break;
    }
/*
Here nothing will be printed because when i==3 then printf will work. But here when i=0, it finds break. So it breaks the loop.
*/
    return 0;
}
