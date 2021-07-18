#include <stdio.h>
int main()
{
    int arr[40], size, i, j, k;
    printf("Enter array size :\n");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {

        for (j = i + 1; j < size;)
        {

            if (arr[j] == arr[i])
            {

                for (k = j; k < size; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;
            }

            else
            {
                j++;
            }
        }
    }

    printf("After removeing the duplicate the array is");
    for (int m = 0; m < size; m++)
    {
        printf("%4d", arr[m]);
    }

    printf("\n");
    return 0;
}