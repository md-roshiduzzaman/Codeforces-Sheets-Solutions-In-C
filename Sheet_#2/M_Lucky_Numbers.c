#include <stdio.h>
int main()
{
    int n1, n2, n, rem, f = 1, found = 0;
    scanf("%d%d", &n1, &n2);

    for (int i = n1; i <= n2; i++)
    {
        n = i;
        f = 1;

        while (n != 0)
        {
            rem = n % 10;
            if (rem != 4 && rem != 7)
            {
                f = 0;
                break;
            }
            n = n / 10;
        }
        if (f == 1)
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("-1\n");
    }

    return 0;
}
