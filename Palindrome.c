#include <stdio.h>

int main()
{ int n;
    int rev = 0, remainder, x;
    printf("Enter your number:-\n");
    scanf("%d", &n);
    x = n;
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }

    if (rev == x)
    {
        printf("This is a  Palindrome number\n");
    }
    else
    {
        printf("This is not a  Palindrome number\n");
    }

    return 0;
}
