#include<stdio.h>
int main()
{int num;
first:
printf("press 0 for  triangular star pattern\n");
  printf("press 1 for Reversed triangular star pattern\n");
    printf("Ener your number\n");
    scanf("%d",&num);
    switch (num)
    {
    case 0:
      printf("*\n");
       printf("**\n");
        printf("***\n");
         printf("****\n");
      break;
    case 1:
     printf("****\n"); 
     printf("***\n");
      printf("**\n");
       printf("*\n");
       break;


    default:
     printf("you have entered a wrong number\n");
    }
    goto first;
     return 0;
}