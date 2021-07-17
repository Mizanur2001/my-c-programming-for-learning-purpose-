#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random_number(int n)
{
    srand(time(NULL));
    return rand()%n;
}



int main()
{
    printf("The random number between 0 to 3 is %d \n",random_number(3));
    
     return 0;
}