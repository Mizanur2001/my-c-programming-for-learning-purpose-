#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random_tose(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int a;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        a = random_tose(7);
       
    }
    for (int i = 0; i < 5; i++)
    {
         printf("the random value is %d\n", a);
    }
    

    return 0;
}