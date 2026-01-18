#include<stdio.h>
int main()
{
    long long a, b, c, d, x;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;
    x = (a*b*c*d)%100;

    if(x>=0 && x<=9)
    {
        printf("0%lld\n", x);
    }
    else
    {
        printf("%lld\n", x);
    }

    return 0;
}
