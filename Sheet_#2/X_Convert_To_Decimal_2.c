#include <stdio.h>
#include <math.h>
int main()
{
    long long n, numbers, B, sum, j;
    scanf("%lld", &n);

    for (long long i = 1; i <= n; i++)
    {
        scanf("%lld", &numbers);
        sum = 0;
        j = 0;

        while (numbers)
        {
            B = numbers % 2;
            numbers = numbers / 2;

            if (B == 1)
            {
                sum = sum + B * (pow(2, j));
                j++;
            }
        }
        
        printf("%lld\n", sum);
    }

    return 0;
}
