#include <stdio.h>
#include <stdlib.h>
int main()
{ //printf("%d\n",sizeof(int));
 //printf("%d\n",sizeof(char));
    int n;
    char *a;
   // int i;
   a = (char *)malloc(n* sizeof(char));
    for (int i = 1; i <= 3; i++)
    {
        printf("Empoyee%d\n", i);
        printf("Enter the character in your employee id\n");
        scanf("%d", &n);
        printf("Enter employee%d id\n", i);
        scanf("%s", a);
        printf("The employee%d's id is %s\n", i, a);
        free(a);
    }

    return 0;
}