#include <stdio.h>
#include <conio.h>
int main()
{
    char x;
    printf("Enter (b) for Math & science\n");
    printf("Enter (m) for Math \n");
    printf("Enter (s) for science\n");
    printf("Enter your subject:-\n");
    scanf("%c", &x);
    switch (x)
    {
    case 'b':
        printf("you have Entered Math & science as your subject you won Rs:-45\n");

        break;
    case's':
        printf("you have Entered science as your subject you won won Rs:-15\n");

        break;
    case 'm':
        printf("you have Entered science as your subject you won Rs:-15\n");

        break;
    default:
        printf("you have entered a wrong subject\n");
        break;
    }
    return 0;
}
