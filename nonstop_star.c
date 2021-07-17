#include <stdio.h>
int main()
{
    int n=0;

    for (int k = 1; k >= 0; k++)
    {
        printf("\nPlease Enter an input\n");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
      if(n<0)
      {
          goto end;
      }
    }
    end:
    printf("Thak you Using the Program\n");
    return 0;
}
