#include <stdio.h>
#include <stdlib.h>
int main()
{
    //printf("%d\n", sizeof(int));
    int n;
    char *a;
    // int i;

    a = (char *)malloc(n* sizeof(char));
    printf("Empoyee1\n");
    printf("how many character do you have in your employee id\n");
    scanf("%d", &n);

    printf("Enter employee1 id\n");
    scanf("%s", a);
    printf("The employee1's id is %s\n", a);
    free(a);

    printf("Empoyee2\n");
    printf("how many charecter do you have in your employee id\n");
    scanf("%d", &n);

    printf("Enter employee2 id\n");
    scanf("%s", a);
    printf("The employee2's id is %s\n", a);
    free(a);

    printf("Empoyee3\n");
    printf("how many charecter do you have in your employee id\n");
    scanf("%d", &n);

    printf("Enter employee3 id\n");
    scanf("%s", a);
    printf("The employee3's id is %s\n", a);
    free(a);

    return 0;
}