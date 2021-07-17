#include <stdio.h>
int main()
{
   int n, max, min, address_max, address_min=0;
    int array[30];
    printf("\nEnter the Value of N\n");
    scanf("%d", &n);
    for (int i = 0; i<n; i++)
    {
        printf("Enter the value of %d array \n", i);
        scanf("%d", &array[i]);
    }

max=array[0];
min=array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
            address_max = i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (array[j]<min)
        {
            min = array[j];
            address_min = j;
        }
    }

    printf("The Max value is %d\n", max);
    printf("The Address of Array carry max value is array[%d]\n" ,address_max);
    printf("The Min value is %d\n", min);
    printf("The Address of Array carry min value is array[%d]\n", address_min);
    return 0;
}