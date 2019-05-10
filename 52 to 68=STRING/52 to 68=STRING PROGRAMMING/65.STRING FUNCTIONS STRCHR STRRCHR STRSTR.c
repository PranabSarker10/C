///STRING FUNCTION
/**
    strchr(str,ch);///strchr(str=From which string I will check,ch=The character I need to find)
///strchr is a function where character is finding out in a string.
    strrchr(str,ch);
///strstr is a function where string is finding out in a string.
    str,str(str1,str2);
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="My name is Pranab";///Here the address of 'n' of "name" is calculated not the 'n' of "Pranab".
    int address,base;

    base = (int)(str);

    address = (int)strchr(str,'n');
    printf("%d %d\n",base,address);///base=2686628(M) and address=2686631(n)
    printf("%d\n",address-base);///This means the difference between address and base.




    address = (int)strchr(str,'P');
    printf("%d\n",address-base);///Difference is '0'.

    if(address == 0)
    {
        printf("Not Found!\n");
    }
    else
    {
        printf("Found at position %d\n",address-base+1);
    }



    address = (int)strchr(str,'X');
    printf("%d %d\n",base,address);
    printf("%d\n",address-base);///Difference is '0'.

    if(address == 0)
    {
        printf("Not Found!\n");
    }
    else
    {
        printf("Found at position %d\n",address-base+1);
    }




    address = (int)strchr(str,'u');
    printf("%d %d\n",base,address);///base=2686628(M) and address=0(As u is not here).
printf("\nNOW THE USE OF STRCHR :\n\n");

    address = (int)strchr(str,'a');
    printf("%d %d\n",base,address);
    printf("%d\n",address-base);///Difference is '0'.

    if(address == 0)
    {
        printf("Not Found!\n");
    }
    else
    {
        printf("Found at position %d\n",address-base+1);
    }


printf("\nNOW THE USE OF STRRCHR :\n\n");///This 16th position a is the a before b from right-side.

    address = (int)strrchr(str,'a');
    printf("%d %d\n",base,address);
    printf("%d\n",address-base);///Difference is '0'.

    if(address == 0)
    {
        printf("Not Found!\n");
    }
    else
    {
        printf("Found at position %d\n",address-base+1);
    }



printf("\nNOW THE USE OF STRSTR :\n\n");

    address = (int)strstr(str,"name");///Remember here string needs to maintain sequence.
    ///Here every string of the large string is sub-string.
    printf("%d %d\n",base,address);
    printf("%d\n",address-base);///Difference is '0'.

    if(address == 0)
    {
        printf("Not Found!\n");
    }
    else
    {
        printf("Found at position %d\n",address-base+1);
    }



    address = (int)strstr(str,"na me");
    printf("%d %d\n",base,address);
    printf("%d\n",address-base);///Difference is '0'.

    if(address == 0)
    {
        printf("Not Found!\n");
    }
    else
    {
        printf("Found at position %d\n",address-base+1);
    }

///REMEMBER: we have to avoid (address == 0) because it is bad process. we have to use if(strstr(str,"sdf")== NULL) <= THIS METHOD.

    address = (int)strstr(str,"name");
    printf("%d %d\n",base,address);
    printf("%d\n",address-base);///Difference is '0'.

    if(strstr(str,"name") == NULL)
    {
        printf("Not Found!\n");
    }
    else
    {
        printf("Found at position %d\n",address-base+1);
    }


    return 0;
}
