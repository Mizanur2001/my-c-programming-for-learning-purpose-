//challenge accepted

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    char s2[20];
    char s3[] = "  is frind of ";
    char s4[20];
    printf("Enter your mane:-\n");
    gets(s1);
    printf("Enter your fried mane:-\n");
    gets(s2);
    strcpy(s4, strcat(s1, s3));
    puts(strcat(s4, s2));

    return 0;
}