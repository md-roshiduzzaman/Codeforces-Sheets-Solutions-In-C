#include <stdio.h>
int main()
{
    int n, a, b, dig_sum, temp, sum = 0;
    scanf("%d%d%d", &n, &a, &b);

    for (int i = 1; i <= n; i++)
    {
        temp = i;
        dig_sum = 0;

        while (temp > 0)
        {
            dig_sum = dig_sum + (temp % 10);
            temp = temp / 10;
        }

        if (dig_sum >= a && dig_sum <= b)
        {
            sum = sum + i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
