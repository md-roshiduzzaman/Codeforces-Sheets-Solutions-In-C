#include<stdio.h>
int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    long long A, B, ans;

    A = a%10;
    B = b%10;
    ans = A+B;

    printf("%lld\n", ans);

    return 0;
}
