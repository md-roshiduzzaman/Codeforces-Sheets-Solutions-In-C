#include<stdio.h>
int main()
{
    long long n, k, a;
    scanf("%lld%lld%lld", &n, &k, &a);

    long long product = n*k;

    if(product % a != 0)
    {
        printf("double\n");
    }
    else 
    {
        long long result = product/a;
        if(result >= -2147483648 && result <= 2147483648)
        {
            printf("int\n");
        }
        else 
        {
            printf("long long\n");
        }
    }

    return 0;
}
