#include<stdio.h>
int main()
{
    long long n, d, m, y;
    scanf("%lld", &n);

    y = n/365;
    n = n%365;
    m = n/30;
    n = n%30;
    d = n;

    printf("%lld years\n", y);
    printf("%lld months\n", m);
    printf("%lld days\n", d);

    return 0;
}
