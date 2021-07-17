#include<stdio.h>
int main()
{
    int a,i;
    printf("How many element do you want in a arry?\n");
    scanf("%d",&a);
    int marks[a];
    for ( i = 0; i < a; i++)
    {    int marks[a];
       printf("Enter the value of %d element of the arry\n",i);
       scanf("%d",&marks[i]);
    }
    for (int j = 0; j < a; j++)
    {
      printf("%d\n",marks[i]);
    }
    
    
     return 0;
}