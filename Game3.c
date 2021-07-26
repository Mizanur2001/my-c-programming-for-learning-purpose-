#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_perform(int n)
{
    srand(time(NULL));
    return rand() % n;
}
void name(int a)
{
    if (a == 0)
    {
        printf("paul\n");
    }

    else if (a == 1)
    {
        printf("Rittik\n");
    }
    else if (a == 2)
    {
        printf("Shramana\n");
    }
    else if (a == 3)
    {
        printf("Anirban\n");
    }
    else if (a == 4)
    {
        printf("Nilajana\n");
    }
    else if (a == 5)
    {
        printf("Mizanur\n");
    }
}

int main()
{
    int rp, ra, rw;
    rp = random_perform(6);
    ra = random_perform(7);
    rw = random_perform(2);

    for (int i = 0; i < 6; i++)
    {
        if (rp == i)
        {
            printf("It's your perform time-> ");
            name(rp);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        if (rw == 0)
        {
            printf("you have to perform -> Truth\n");
            break;
        }
        if (rw == 1)
        {
            printf("you have to perform -> dare\n");
            break;
        }
    }
    for (int i = 0; i <= 6; i++)
    {
        if (ra == i)
        {
            printf("It's your asking time-> ");
            name(ra - 1);
            if (ra == 0)
            {
                name(ra);
            }
        }
    }

    return 0;
}