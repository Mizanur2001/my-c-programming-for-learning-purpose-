#include <stdio.h>
int main()
{
    int n, max = 0, min, address_max, address_min;
    int array[30];
    printf("\nEnter the Value of N\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value fo %d array \n", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            address_max = i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (min > array[j])
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