#include <stdio.h>
int main()
{
    long long n, numbers;
    scanf("%lld", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &numbers);
        long long mul = 1;

        for (int j = 1; j <= numbers; j++)
        {
            mul = mul*j;
        }
        printf("%lld\n", mul);
    }

    return 0;
}
