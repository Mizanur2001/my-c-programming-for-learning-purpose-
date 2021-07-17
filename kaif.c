#include<stdio.h>

void main ()
    {
      int i,n,j;
      printf("\n Enter the number of rows\n");
      scanf("%d",&n);
      while(n>=0)
        {
        for(i=1;i<=n;i++)
         {
            for(j=1;j<=i;j++)
            printf("*");
            printf("\n");
         }
        printf("\n Enter the number of rows or any negative integer to terminate the program\n");
        scanf("%d",&n);
        }
        printf("Thank you for using this program\n");
    }



  