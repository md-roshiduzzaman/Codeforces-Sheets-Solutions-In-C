#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = i * 2 - 1; k >= 1; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
