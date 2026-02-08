#include<stdio.h>
#include<limits.h>
int main()
{
    long long n, k;
    scanf("%lld%lld", &n, &k);

    long long num, count=0;
    long long min=INT_MAX;

    for(long long i=0; i<n; i++)
    {
        scanf("%lld", &num);
        if(num < min)
        {
            min = num;
        }
        
        count++;
        
        if(count == k)
        {
            printf("%lld ", min);
            count=0;
            min = INT_MAX;
        }
    }

    if(count > 0)
    {
        printf("%lld ", min);
    }

    return 0;
}
