#include <stdio.h>
int functionsum(int *x, int *y)
{
    int sum;
    sum = *x + *y;
}
int functionsub(int *x, int *y)
{
    int sum;
    sum = *x - *y;
}
int functionmul(int *x, int *y)
{
    int sum;
    sum = *x * *y;
}
int functiondiv(int *x, int *y)
{
    int sum;
    sum = *x / *y;
}

int main()
{
    int a;
    printf("0. Exit\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Entre your number\n");
    scanf("%d", &a);
    switch (a)
    {
        int mun1, mun2 ,c;
        
    case 0:
        printf("Exit from programe\n");
        break;

    case 1:

        printf("enter your first number=\n");
        scanf("%d", &mun1);
        printf("enter your second number=\n");
        scanf("%d", &mun2);

        c = functionsum(&mun1, &mun2);
        printf("the answer is=%d\n", c);
        break;

    case 2:

        printf("enter your first number=\n");
        scanf("%d", &mun1);
        printf("enter your second number=\n");
        scanf("%d", &mun2);

        c = functionsub(&mun1, &mun2);
        printf("the answer is=%d\n", c);
        break;
    case 3:

        printf("enter your first number=\n");
        scanf("%d", &mun1);
        printf("enter your second number=\n");
        scanf("%d", &mun2);

        c = functionmul(&mun1, &mun2);
        printf("the answer is=%d\n", c);
        break;

    case 4:

        printf("enter your first number=\n");
        scanf("%d", &mun1);
        printf("enter your second number=\n");
        scanf("%d", &mun2);

        c = functiondiv(&mun1, &mun2);
        printf("the answer is=%d\n", c);
        break;
    default:
        printf("you have entered a wrong number\n");
    }

    return 0;
}