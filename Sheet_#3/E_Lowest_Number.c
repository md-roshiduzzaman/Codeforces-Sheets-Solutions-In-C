#include<stdio.h>
int main()
{
    long long n, low, pos;
    scanf("%lld", &n);
    long long arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    low = arr[0];
    pos = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i] < low)
        {
            low = arr[i];
            pos = i;
        }
    }

    printf("%lld %lld\n", low, pos+1);

    return 0;
}
