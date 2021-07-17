#include<stdio.h>
#include<conio.h>
int main()

{
   int x;
   printf("enter your age:-\n");
   scanf("%d",&x);
   switch (x)
   {
   case 3:
      printf("you have won rs45\n");
    
       break;
     case 13:
      printf("you have won rs15\n");
    
       break;
       case 23:
      printf("you have won rs15\n");
    
       break;
   default:
   printf("you have entered a wrong age\n");
     
   }
    return 0;
}

