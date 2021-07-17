#include <stdio.h>
#define MAX_SIZE 100
int main()
{   float avg=0.0;
    int  n,sum = 0;
    int array[MAX_SIZE];
    printf("\nEnter the Value of N\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value fo %d array \n",i);
        scanf("%d",&array[i]);
    }
    for (int j = 0; j < n; j++)
    {
        sum=sum+array[j];
    }
    avg=(float)sum/n;
    printf("The value of Avarage is %f\n ",avg);
    return 0;
}