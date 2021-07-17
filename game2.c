#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char f[20];
char l[20];
int o, t, b, a, c, d, e, m;
int static sc, sc1;

int score(int n)
{

    sc1 = sc1 + n;
    return sc1;
}

int score_comp(int n)
{

    sc = sc + n;
    return sc;
}

int Win()
{
    if (sc1 > sc)
    {

        printf("%s %s win the match\n", f, l);
        printf("  o         o\n");
        printf("       !     \n");
        printf(" *           * \n");
        printf("  *         * \n");
        printf("       *   \n");
    }
    else if (sc1 < sc)
    {
        printf("computer win the match\n");
        printf("  o       o\n");
        printf("      !     \n");
        printf("      *   \n");
        printf("  *       * \n");
        printf(" *         * \n");
    }
    else if (sc1 == sc)
    {
        printf("the Match is drow\n");
        printf("  o       o\n");
        printf("      !     \n");
        printf(" ~~~~~~~~~~~ \n");
    }
    else
    {
        printf("error in computer programming\n");
    }
}

int random_tose(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int random_score(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int rand_comp_batorball(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{

    d = random_tose(2);
    e = rand_comp_batorball(2);

    printf("\n");

    printf("NOTE:- please don't use space and /*-+<>=:; this type of char while gamming \n");

    printf("\n");

    printf("~*~Welcome to hand cricket game~*~\n");

    printf("Enter your first name \n");
    scanf("%s", &f);
    getchar();
    printf("Enter your last name\n");
    scanf("%s", &l);
    printf("How many over do you want to play the game\n");
    scanf("%d", &o);
    printf("So,%s Let's play the game\n", f);
    printf("Please tose before gamming!\n0. Head\n1. Tales\n");
    printf("Enter your choice\n");
    scanf("%d", &t);

    if (d == t)
    {
        printf("Congratulation!!\n %s win the tose\n", f);
        printf("so,%s enter your choice\n0.balling\n1.batting\n");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Ok %s\nyour choice is batting\nSo,Start batting\n", f);
        }
        else if (b == 0)
        {
            printf("Ok %s\nyour choice is balling\nSo,Start balling\n", f);
        }
        else
        {
            printf("You have entered an invalid number\n");
            goto end;
        }
    }
    else
    {
        printf("sorry!! computer win the tose\n");
        // printf("Value of e is %d\n",e);
        if (e == 0)
        {
            printf("Computer choice is bolling\n");
        }
        else if (e == 1)
        {
            printf("Computer choice is batting\n");
        }
        else
        {
            printf("There is something error in computer programming\n ");
            goto end;
        }
    }
    // this is only for programmer info

    // gamming();

    //  d = random_tose(2);

    //    e = rand_comp_batorball(2);

    //   tose = t

    //  my batting & bolling chice = b

    //  comp batting & bolling chice = e

    //  0.balling

    //  1.batting

    // round one

    if (t == d)
    {
        if (b == 0)
        {
            //  my balling
            printf("it's computer batting time\n");
            for (int j = 1; j <= o * 6; j++)
            {
                // m=random_score(7);
                printf("Enter your %d choice\n\n", j);
                scanf("%d", &c);
                printf("your choice is %d\n", c);
                printf("Computer choice is %d\n", random_score(7));
                if (random_score(7) == c)
                {
                    printf("congrotulation!! computer is  Out\n");
                    printf("Ball no- %d\n\n", j);
                    printf("computer score is %d\n", score_comp(0));

                    goto outofloop;
                }
                else
                {
                    if (random_score(7) == 0)
                    {
                        printf("It's %d runs\n", c);
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(c));
                    }
                    else if (random_score(7) == 1)
                    {
                        printf("It's one runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(1));
                    }
                    else if (random_score(7) == 2)
                    {
                        printf("It's two runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(2));
                    }
                    else if (random_score(7) == 3)
                    {
                        printf("It's three runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(3));
                    }
                    else if (random_score(7) == 4)
                    {
                        printf(" oh no!! It's a four\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(4));
                    }
                    else if (random_score(7) == 5)
                    {
                        printf("oh no!! It's a four and one bye runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(5));
                    }
                    else if (random_score(7) == 6)
                    {
                        printf(" oh no!! It's a sixer\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(6));
                    }
                    else
                    {
                        printf("there is some thing error in computer programming\n");
                        goto end;
                    }
                }
            }
        }

        else if (b == 1)
        {
            // my batting
            printf("it's %s's batting time\n\n", f);
            for (int i = 1; i <= o * 6; i++)
            {
                printf("Enter your %d choice\n", i);
                scanf("%d", &a);
                printf("your choice is %d\n", a);
                printf("Computer choice is %d\n", random_score(7));
                int dip = random_score(7);
                if (random_score(7) == a)
                {
                    printf("Sorry!!! %s you are Out\n", f);
                    printf("Ball no- %d\n\n", i);
                    printf("your score is %d\n", score(0));
                    goto outofloop;
                }
                else
                {
                    if (a == 0)
                    {
                        printf("It's %d runs\n", dip);
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(dip));
                    }
                    else if (a == 1)
                    {
                        printf("It's one runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(1));
                    }
                    else if (a == 2)
                    {
                        printf("It's two runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(2));
                    }
                    else if (a == 3)
                    {
                        printf("It's three runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(3));
                    }
                    else if (a == 4)
                    {
                        printf(" oh!! It's a four\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(4));
                    }
                    else if (a == 5)
                    {
                        printf("oh!! It's a four and one bye runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(5));
                    }
                    else if (a == 6)
                    {
                        printf(" oh!! It's a sixer\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(6));
                    }
                    else
                    {
                        printf("You have entered an invalid number\n");
                        printf("your score is %d\n", score(0));
                        goto end;
                    }
                }
            }
        }

        else
        {
            printf("ERROR \n");
        }
    }
    else if (t != d)
    {
        if (e == 0)
        {
            //bolling of comp
            printf("it's %s's batting time\n\n", f);
            for (int i = 1; i <= o * 6; i++)
            {
                int dip = random_score(7);
                printf("Enter your %d choice\n", i);
                scanf("%d", &a);
                printf("your choice is %d\n", a);
                printf("Computer choice is %d\n", random_score(7));
                if (random_score(7) == a)
                {
                    printf("Sorry!!! %s you are Out\n", f);
                    printf("Ball no- %d\n\n", i);
                    printf("your score is %d\n", score(0));
                    goto outofloop;
                }
                else
                {
                    if (a == 0)
                    {
                        printf("It's %d runs\n", dip);
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(dip));
                    }
                    else if (a == 1)
                    {
                        printf("It's one runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(1));
                    }
                    else if (a == 2)
                    {
                        printf("It's two runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(2));
                    }
                    else if (a == 3)
                    {
                        printf("It's three runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(3));
                    }
                    else if (a == 4)
                    {
                        printf(" oh!! It's a four\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(4));
                    }
                    else if (a == 5)
                    {
                        printf("oh!! It's a four and one bye runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(5));
                    }
                    else if (a == 6)
                    {
                        printf(" oh!! It's a sixer\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(6));
                    }
                    else
                    {
                        printf("You have entered an invalid number\n");
                        printf("your score is %d\n", score(0));
                        goto end;
                    }
                }
            }
        }

        else if (e == 1)
        {
            //batting of comp
            printf("it's computer batting time\n");
            for (int j = 1; j <= o * 6; j++)
            {
                printf("Enter your %d choice\n\n", j);
                scanf("%d", &c);
                printf("your choice is %d\n", c);
                printf("Computer choice is %d\n", random_score(7));
                if (random_score(7) == c)
                {
                    printf("congrotulation!! computer is  Out\n");
                    printf("Ball no- %d\n\n", j);
                    printf("computer score is %d\n", score_comp(0));

                    goto outofloop;
                }
                else
                {
                    if (random_score(7) == 0)
                    {
                        printf("It's %d runs\n", c);
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(c));
                    }
                    else if (random_score(7) == 1)
                    {
                        printf("It's one runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(1));
                    }
                    else if (random_score(7) == 2)
                    {
                        printf("It's two runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(2));
                    }
                    else if (random_score(7) == 3)
                    {
                        printf("It's three runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(3));
                    }
                    else if (random_score(7) == 4)
                    {
                        printf(" oh no!! It's a four\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(4));
                    }
                    else if (random_score(7) == 5)
                    {
                        printf("oh no!! It's a four and one bye runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(5));
                    }
                    else if (random_score(7) == 6)
                    {
                        printf(" oh no!! It's a sixer\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(6));
                    }
                    else
                    {
                        printf("there is some thing error in computer programming\n");
                        goto end;
                    }
                }
            }
        }

        else
        {
            printf("ERROR \n");
        }
    }
outofloop:

    //Round two

    if (t == d)
    {
        if (b == 0)
        {
            // batting
            printf("it's %s's batting time\n\n", f);
            for (int i = 1; i <= o * 6; i++)
            {
                int dip = random_score(7);
                printf("Enter your %d choice\n", i);
                scanf("%d", &a);
                printf("your choice is %d\n", a);
                printf("Computer choice is %d\n", random_score(7));
                if (random_score(7) == a)
                {
                    printf("Sorry!!! %s you are Out\n", f);
                    printf("Ball no- %d\n\n", i);
                    printf("your score is %d\n", score(0));
                    goto end;
                }
                else
                {
                    if (a == 0)
                    {
                        printf("It's %d runs\n", dip);
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(dip));
                    }
                    else if (a == 1)
                    {
                        printf("It's one runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(1));
                    }
                    else if (a == 2)
                    {
                        printf("It's two runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(2));
                    }
                    else if (a == 3)
                    {
                        printf("It's three runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(3));
                    }
                    else if (a == 4)
                    {
                        printf(" oh!! It's a four\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(4));
                    }
                    else if (a == 5)
                    {
                        printf("oh!! It's a four and one bye runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(5));
                    }
                    else if (a == 6)
                    {
                        printf(" oh!! It's a sixer\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(6));
                    }
                    else
                    {
                        printf("You have entered an invalid number\n");
                        printf("your score is %d\n", score(0));
                        goto end;
                    }
                }
            }
        }

        else if (b == 1)
        {
            //balling
            printf("it's computer batting time\n");
            for (int j = 1; j <= o * 6; j++)
            {

                printf("Enter your %d choice\n\n", j);
                scanf("%d", &c);
                printf("your choice is %d\n", c);
                printf("Computer choice is %d\n", random_score(7));
                if (random_score(7) == c)
                {
                    printf("congrotulation!! computer is  Out\n");
                    printf("Ball no- %d\n\n", j);
                    printf("computer score is %d\n", score_comp(0));

                    goto end;
                }
                else
                {
                    if (random_score(7) == 0)
                    {
                        printf("It's %d runs\n", c);
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(c));
                    }
                    else if (random_score(7) == 1)
                    {
                        printf("It's one runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(1));
                    }
                    else if (random_score(7) == 2)
                    {
                        printf("It's two runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(2));
                    }
                    else if (random_score(7) == 3)
                    {
                        printf("It's three runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(3));
                    }
                    else if (random_score(7) == 4)
                    {
                        printf(" oh no!! It's a four\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(4));
                    }
                    else if (random_score(7) == 5)
                    {
                        printf("oh no!! It's a four and one bye runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(5));
                    }
                    else if (random_score(7) == 6)
                    {
                        printf(" oh no!! It's a sixer\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(6));
                    }
                    else
                    {
                        printf("there is some thing error in computer programming\n");
                        goto end;
                    }
                }
            }
        }

        else
        {
            printf("ERROR\n");
        }
    }
    else if (t != d)
    {
        if (e == 0)
        {
            //battibg of comp
            printf("it's computer batting time\n");
            for (int j = 1; j <= o * 6; j++)
            {
                // m=random_score(7);
                printf("Enter your %d choice\n\n", j);
                scanf("%d", &c);
                printf("your choice is %d\n", c);
                printf("Computer choice is %d\n", random_score(7));
                if (random_score(7) == c)
                {
                    printf("congrotulation!! computer is  Out\n");
                    printf("Ball no- %d\n\n", j);
                    printf("computer score is %d\n", score_comp(0));

                    goto end;
                }
                else
                {
                    if (random_score(7) == 0)
                    {
                        printf("It's %d runs\n", c);
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(c));
                    }
                    else if (random_score(7) == 1)
                    {
                        printf("It's one runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(1));
                    }
                    else if (random_score(7) == 2)
                    {
                        printf("It's two runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(2));
                    }
                    else if (random_score(7) == 3)
                    {
                        printf("It's three runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(3));
                    }
                    else if (random_score(7) == 4)
                    {
                        printf(" oh no!! It's a four\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(4));
                    }
                    else if (random_score(7) == 5)
                    {
                        printf("oh no!! It's a four and one bye runs\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(5));
                    }
                    else if (random_score(7) == 6)
                    {
                        printf(" oh no!! It's a sixer\n");
                        printf("Ball no- %d\n\n", j);
                        printf("computer score is %d\n", score_comp(6));
                    }
                    else
                    {
                        printf("there is some thing error in computer programming\n");
                        goto end;
                    }
                }
            }
        }

        else if (e == 1)
        {
            //balling of comp
            printf("it's %s's batting time\n\n", f);
            for (int i = 1; i <= o * 6; i++)
            {
                int dip = random_score(7);
                printf("Enter your %d choice\n", i);
                scanf("%d", &a);
                printf("your choice is %d\n", a);
                printf("Computer choice is %d\n", random_score(7));
                if (random_score(7) == a)
                {
                    printf("Sorry!!! %s you are Out\n", f);
                    printf("Ball no- %d\n\n", i);
                    printf("your score is %d\n", score(0));
                    goto end;
                }
                else
                {
                    if (a == 0)
                    {
                        printf("It's %d runs\n", dip);
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(dip));
                    }
                    else if (a == 1)
                    {
                        printf("It's one runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(1));
                    }
                    else if (a == 2)
                    {
                        printf("It's two runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(2));
                    }
                    else if (a == 3)
                    {
                        printf("It's three runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(3));
                    }
                    else if (a == 4)
                    {
                        printf(" oh!! It's a four\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(4));
                    }
                    else if (a == 5)
                    {
                        printf("oh!! It's a four and one bye runs\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(5));
                    }
                    else if (a == 6)
                    {
                        printf(" oh!! It's a sixer\n");
                        printf("Ball no- %d\n\n", i);
                        printf("your score is %d\n", score(6));
                    }
                    else
                    {
                        printf("You have entered an invalid number\n");
                        printf("your score is %d\n", score(0));
                        goto end;
                    }
                }
            }
        }

        else
        {
            printf("ERROR\n");
        }
    }
end:

    printf("\n\n\n");
    printf("%s %s Score is %d\n", f, l, sc1);
    printf("Computer's score is %d\n", sc);
    printf("\n");

    Win();

    //printf("computer score is %d\n",score_comp());

    printf("\n");

    return 0;
}
