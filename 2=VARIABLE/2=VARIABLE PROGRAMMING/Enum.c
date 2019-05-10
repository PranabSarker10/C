#include<stdio.h>

enum week{Saturday,Sunday,Monday,Tuesday,Wednesday,Thursday,Friday};

int main()
{
    enum week today;
    today=Wednesday;
    printf("%d day",today + 1);
    return 0;
}
