#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char f[20];
char l[20];
int a;

//this is random value

int random_number(int n)
{
    srand(time(NULL));
    return rand() % n;
}

// this is score_u function

int score_u()
{

    static int c;
    c++;
    return c;
}

//This is score_comp function

int score_comp()
{
    static int d;
    d++;
    return d;
}

//This is func1

int func1(int *b)
{
    if ((*b == 0 || *b == 1) && (random_number(3) == 0 || random_number(3) == 1))
    {
        return 1;
    }

    else if ((*b == 1 || *b == 2) && (random_number(3) == 1 || random_number(3) == 2))
    {
        return 2;
    }

    else if ((*b == 0 || *b == 2) && (random_number(3) == 0 || random_number(3) == 2))
    {
        return 0;
    }
}

//This is function

int function(int *b)
{
    if (func1(b) == *b)
    {
        printf("congratulation! you have scored %d points\n", score_u());
    }
    else
    {
        printf("sorry! computer have scored %d points\n", score_comp());
    }
}

// This is a win function

int win()
{
    if (score_u() > score_comp())
    {
        printf(" Hey, %s congratulation!!\n", f);
        printf("%s %s win the Game.....\n", f, l);
    }
    else if (score_u() == score_comp())
    {
        printf("The game is draw....\n");
    }

    else
    {
        printf("Sorry!! %s\n", f);
        printf("%s %s lose the Game....\n", f, l);
    }
}
    int main()
    {
        //printf(" %d \n", random_number(3));
        printf("\n");
        printf("~*~welcome to the stone-paper-scissors game~*~\n ");
        printf("Please Enter your first name \n");
        scanf("%s", &f);
        getchar();
        printf("please Enter your last name\n");
        scanf("%s", &l);
        printf("\n");
        printf("So,%s let's play the game\n", f);
        for (int i = 1; i <= 3; i++)
        {

            printf("0. stone\n");
            printf("1. paper\n");
            printf("2. scissors\n");
            printf("%s enter your %d choice\n", f, i);
            scanf("%d", &a);
            if (a == 0)
            {
                printf("your choice is stone\n");
            }
            else if (a == 1)
            {
                printf("your choice is paper\n");
            }
            else if (a == 2)
            {
                printf("your choice is scissors\n");
            }
            else
            {
                printf("%s it's an invalid number\n",f);
                goto end;
            }

            if (random_number(3) == 0)
            {
                printf("computer choice is stone\n");
            }

            else if (random_number(3) == 1)
            {
                printf("computer choice is paper\n");
            }

            else if (random_number(3) == 2)
            {
                printf("computer choice is scissors\n");
            }
            else
            {
                printf("there is a problem in computer programming\n");
            }
            if (random_number(3) == a)
            {
                printf("You bouth are same \n So, %s Try again\n", f);
            }
            else
            {
                function(&a);
            }

            printf("\n");
        }

        win();
        printf("\n");

    end:
        return 0;
    }
