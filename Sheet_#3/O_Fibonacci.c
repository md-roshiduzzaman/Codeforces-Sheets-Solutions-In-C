#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    long long fib[50];
    fib[1] = 0;
    fib[2] = 1;

    for (i = 3; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("%lld\n", fib[n]);

    return 0;
}
