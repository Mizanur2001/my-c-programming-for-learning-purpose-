#include <stdio.h>
#include <string.h>
struct employee
{
    char name[30];
    char dl[20];
    char routs[20];
    int kms;
};
#include <stdio.h>
int main()
{
    struct employee e1, e2, e3;
    printf("~~:Welcome to our driving agency:~~ \n ");
    printf("Enter driver 1 name\n");
     fflush(stdin);
    gets(e1.name);
     printf("Enter driver 1 Lisence\n");
      fflush(stdin);
     gets(e1.dl);
     printf("Enter driver 1 routs\n");
      fflush(stdin);
     gets(e1.routs);
     printf("Enter driver 1 kms drive every day \n");
    scanf("%d",&e1.kms);
     printf("Enter driver 2 name\n");
      fflush(stdin);
    gets(e2.name);
     printf("Enter driver 2 Lisence\n");
      fflush(stdin);
     gets(e2.dl);
     printf("Enter driver 2 routs\n");
      fflush(stdin);
     gets(e2.routs);
     printf("Enter driver 2 kms drive every day \n");
    scanf("%d",&e2.kms);
     printf("Enter driver 3 name\n");
      fflush(stdin);
    gets(e3.name);
     printf("Enter driver 3 Lisence\n");
      fflush(stdin);
     gets(e3.dl);
     printf("Enter driver 3 routs\n");
      fflush(stdin);
     gets(e3.routs);
     printf("Enter driver 3 kms drive every day \n");
    scanf("%d",&e3.kms);
    printf("\n");
     printf("\n");

     printf("***********************************************\n");
    
     printf("Driver no 1 Name is:%s\n", e1.name);

        printf("Driver no 1 DL no is:%s\n", e1.dl);

        printf("Driver no 1 Route is:%s\n", e1.routs);

        printf("Driver no 1 kms is:%d\n", e1.kms);

        printf("\n");
        printf("\n");

        printf("Driver no 2 Name is:%s\n", e2.name);

        printf("Driver no 2 DL no is:%s\n", e2.dl);

        printf("Driver no 2 Route is:%s\n", e2.routs);

        printf("Driver no 2 kms is:%d\n", e2.kms);

         printf("\n");
        printf("\n");

         printf("Driver no 3 Name is:%s\n", e3.name);

        printf("Driver no 3 DL no is:%s\n", e3.dl);

        printf("Driver no 3 Route is:%s\n", e3.routs);

        printf("Driver no 3 kms is:%d\n", e3.kms);





        
    return 0;
}
