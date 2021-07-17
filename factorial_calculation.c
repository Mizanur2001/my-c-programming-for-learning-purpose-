#include <stdio.h>

int factorial(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int factorial_loop(int n)
{
    int a = 1;
    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        int i = 1;

        while (i <= n)
        {
            a = a * i;

            i++;
        }
        //  printf("The factorial of %d is %d (Using loop)\n", n, a);
        return a;
    }
}

int main()
{
    float sum = 0;
    float facter;
    int num, a;
    printf("Please Enter a numbere \n");
    scanf("%d", &num);
    printf("The factorial of %d is %d \n", num, factorial(num));
    a = factorial_loop(num);
    printf("The factorial of %d is %d (using loop)\n", num, a);

    for (int i = 1; i <= num; i++)
    {
        float x = factorial(i);
        facter = (i / x);

        //printf("%f\n", facter);
        sum = sum + facter;
    }
    printf("The sum of the Factorial is %f\n", sum);

    return 0;
}
