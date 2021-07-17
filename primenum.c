#include <stdio.h>
int n;

int func()
{
    for (int i = 2; i * i < n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            return 1;
        }
    }
}

int main()
{

    printf("Enter a number:-\n");
    scanf("%d", &n);
    if (func(n) == 1)
    {
        printf("This is not  a prime number\n");
    }

    else
    {
        printf("This is  a prime number\n");
    }

    return 0;
}