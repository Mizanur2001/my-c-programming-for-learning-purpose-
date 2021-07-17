#include<stdio.h>
#include<conio.h>

int main()
{
  int a;
  first:
    printf("Enter no 1 :- for Km to mile\n");
     printf("Enter no 2:- for Inch to Foot\n");
      printf("Enter no 3:-for Pound to Kg\n");
       printf("Enter no 4:- for Inch to Metres\n");
        printf("Enter no 5:-for Cm to Inch\n");
         printf("Enter your convertion no:-\n");
          printf("Enter 0 to exit\n");
        scanf("%d",&a);
        if (a==1)
        {  float b,c;
             printf("Km to mile convestion\n");
              printf("Enter your number:-\n");
              scanf("%f",&b);
              c=b*6214/10000;
               printf("%fkm to miles:-%f\n",b,c);
        }
        else if (a==2)
        {  float b,c;
           printf("Inch to Foot convestion\n");
              printf("Enter your number:-\n");
              scanf("%f",&b);
              c=b/12;
               printf("%f Inch to foot:-%f\n",b,c);
        }
         else if (a==3)
        {  float b,c;
           printf("Pound to kg convestion\n");
              printf("Enter your number:-\n");
              scanf("%f",&b);
              c=b*0.453592;
               printf("%f pound to Kg:-%f\n",b,c);
        }
         else if (a==4)
        {  float b,c;
           printf("Inch to Metres convestion\n");
              printf("Enter your number:-\n");
              scanf("%f",&b);
              c=b*0.0254;
               printf("%f Inch to Metres:-%f\n",b,c);
        }
        else if (a==5)
        {  float b,c;
           printf("Cm to Inch convestion\n");
              printf("Enter your number:-\n");
              scanf("%f",&b);
              c=b*0.393701;
               printf("%f cm to Inch:-%f\n",b,c);
        }
         else if (a==0)
      {
         goto end;
      }
        else
        {
                printf("You have entered a wrong number\n");

        }
        
       goto first;
        
   
      
     end :
    return 0;
} 
