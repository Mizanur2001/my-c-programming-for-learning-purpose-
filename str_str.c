#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], t[50], *cp;
    printf("Enter S string\n");
    gets(s);
    printf("Enter T string\n");
    gets(t);
    cp = strstr(s, t);
    if (cp)
    {
        printf("Second String is found in the First String at %d position\n", (cp - s));
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}