#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, m, n, o, p;
    printf("Enter the number of rows and colomns of 1st matrix\n");
    scanf("%d%d", &m, &n);
    printf("Fill the value of 1st matrix\n");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &a[i][j]);
    }
    printf("Enter the number of rows and colomns of 2nd matrix\n");
    scanf("%d%d", &o, &p);
    printf("Fill the value of 2nd matrix\n");

    for (j = 0; j < p; j++)
    {
        scanf("%d", &b[i][j]);
    }
    if (n == o)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }
    }
    else
    {
        printf("Mitrix multiplication does not exit\n");
        goto end;
    }

    printf("The resultant matrix is \n");
    for ( j = 0; j < p; j++)
    {
        printf("%4d",c[i][j]);
        printf("\n\n");
    }
    
end:
    return 0;
}
