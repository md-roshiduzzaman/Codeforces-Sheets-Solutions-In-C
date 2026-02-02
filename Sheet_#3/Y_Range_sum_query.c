#include<stdio.h>
int main()
{
    long long n, q;
    scanf("%lld%lld", &n, &q);

    long long arr[n+1], prefix[n+1];
    prefix[0] = 0;

    for(int i=1; i<=n; i++)
    {
        scanf("%lld", &arr[i]);
        prefix[i] = prefix[i-1] + arr[i];
    }

    while(q--)
    {
        long long l, r;
        scanf("%lld%lld", &l, &r);
        printf("%lld\n", prefix[r] - prefix[l-1]);
    }

    return 0;
}
