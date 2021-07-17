#include <stdio.h>
int main()
{
   //#include<stdio.h>
   //#include<conio.h>

   //int main()

   int a;

   printf("press 1 for math & science\n");
   printf("press 2 for math\n");
   printf("press 3 for science\n");

   printf("enter your subject no:-");
   scanf("%d", &a);

   printf("You have entered %d as your subject you win Rs:-", a);
   switch (a)
   {
   case 1:
      printf("45\n");
      break;
   case 2:
      printf("15\n");
      break;
   case 3:
      printf("25\n");
      break;

   default:
      printf(" 0, becaues you have entered a wrong subject\n");
   }

   return 0;
}
