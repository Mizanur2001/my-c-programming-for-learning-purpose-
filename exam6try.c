#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[30];
    char dl[20];
    char roots[20];
    int kms;
}driver[i];
int main()
{
    int n;
    int *ptr;
    printf("~~:Welcome to our driving agency:~~ \n ");
    printf("How many Driver do you want?\n");
    scanf("%d", &n);
   // ptr=(int*)malloc(n*sizeof(struct employee));
    for (int i = 0; i <= n; i++)
    {
        struct employee driver[i];
        printf("Enter driver %d name\n", i);
        //fflush(stdin);
       // gets(driver[i].name);
        scanf("%s", &driver[i].name);
        getchar();
        printf("Enter driver %d Lisence\n", i);
        //fflush(stdin);
        //gets(driver[i].dl);
        scanf("%s", &driver[i].dl);
          getchar();
        printf("Enter driver %d Roots\n", i);
       // fflush(stdin);
       // gets(driver[i].roots);
         scanf("%s", &driver[i].roots);
           getchar();
        printf("Enter driver %d drive mks every day\n", i);
        scanf("%d", &driver[i].kms);

        printf("\n");

    }

   /* printf("***********************************************");
    for (int i = 0; i < n; i++)
    {
     printf("Driver no %d Name is:%s\n", i, driver[i].name);

        printf("Driver no %d DL no is:%s\n", i, driver[i].dl);

        printf("Driver no %d Route is:%s\n", i, driver[i].roots);

        printf("Driver no %d kms is:%d\n", i, driver[i].kms);

        printf("\n");
    }*/

    return 0;
}