//s=(a+b+c)/2
//A = √[s(s-a)(s-b)(s-c)]


#include<stdio.h>
#include<math.h>

int main()
{
    float a , b , c , d , s ;

    printf("Enter the vale of Firs side of a triangle\n");
    scanf("%f",&a);
    printf("Enter the vale of Second side of a triangle\n");
    scanf("%f",&b);
    printf("Enter the vale of Third side of a triangle\n");
    scanf("%f",&c);

   s=(a+b+c)/2;
   d= sqrt(s*(s-a)*(s-b)*(s-c));

    
    
    if ((a==b)&&(a==c)&&(b==c))
    {
        printf("This is Equilateral Triangle\n");
        printf("And the area of Equilateral triangle is %f\n",d);
    }
    else if ((a==b)||(a==c)||(b==c))
    {
        printf("This is Isosceles triangle\n");
        printf("And the area of Isosceles triangle is %f\n",d);
    }
    else{
      printf("This is scalene triangle\n");
      printf("And the area of scalene triangle is %f\n",d);

    }
    
    

     return 0;
}