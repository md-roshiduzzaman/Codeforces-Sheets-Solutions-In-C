#include<stdio.h>
int main()
{
    long long n, sum=0;
    scanf("%lld", &n);

    char dig[n+1];
    scanf("%s", &dig);

    for(int i=0; i<n; i++)
    {
        sum = sum + dig[i] - '0';
    }

    printf("%lld\n", sum);

    return 0;
}
