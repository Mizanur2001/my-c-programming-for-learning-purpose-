#include<stdio.h>


int main()

{int a;


printf("press 1 for math & science\n");
printf("press 2 for math\n");
printf("press 3 for science\n");



   printf("enter your subject no:-");
   scanf("%d",&a);
    
   printf("You have entered %d as your subject\n",a);

   if (a==1)
   {
       printf("you won:-Rs45\n");
   }
   else if(a==2) 
   {
        printf("you won:-Rs15\n");
   }
    else if (a==3) 

   {
        printf("you won:-Rs15\n");
   }
   else
   {
        printf("You have entered wrong no\n");

   }
   
    return 0;
}
