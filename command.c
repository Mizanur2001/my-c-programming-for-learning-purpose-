#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The value of argc is %d", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The argument at index number %d has a value of %s \n", i, argv[i]);
    }
}