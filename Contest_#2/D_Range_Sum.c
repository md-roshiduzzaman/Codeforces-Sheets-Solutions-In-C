#include<stdio.h>

int main()
{
    long long t;
    scanf("%lld", &t);

    while (t--)
    {
        long long l, r;
        scanf("%lld%lld", &l, &r);

        if (l > r)
        {
            long long tmp = l;
            l = r;
            r = tmp;
        }

        long long sum = (r*(r + 1)/2) - (l*(l - 1)/2);
        printf("%lld\n", sum);
    }

    return 0;
}
