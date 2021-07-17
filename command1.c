#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a, b;
    char *c;
    c = argv[1];
    a = atoi(argv[2]);
    b = atoi(argv[3]);

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %s\n", c);

    if (strcmp ( c, "add" )== 0)
    {
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if (strcmp(c, "substract") == 0)
    {
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (strcmp(c, "multiply") == 0)
    {
        printf("%d * %d = %d\n", a, b, a * b);
    }
    else if (strcmp(c, "devide") == 0)
    {
        printf("%d / %d = %d\n", a, b, a / b);
    }
    else
    {
        printf("ERROR\n");
    }
    

    return 0;
}