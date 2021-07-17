#include<stdio.h>
#define EOF 0
int main()
{
    int sum=0,a;
    printf("\nEner the Value press ctrl+d to sum those num\n");
    while(scanf("%d",&a)!=EOF)
    {
sum=sum+a;

    }
    printf("The sum is: %d\n",sum);
     return 0;
}