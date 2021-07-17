#include <stdio.h>

int leap_year(int y)
{

    if (((y % 4 == 0) && (y % 100!= 0)) || (y %400 == 0))
    {
        printf("%d is leap year\n",y);
    }
    
    else
    {
        printf("%d This is non leap year\n",y);
    }
}

int main()
{
    int y;
    printf("Please Enter a year\n");
    scanf("%d", &y);
    leap_year(y);
    return 0;
}
