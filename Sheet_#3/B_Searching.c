#include<stdio.h>
int main()
{
    long long n, f=0;
    scanf("%lld", &n);
    long long arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long x;
    scanf("%lld", &x);

    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            f=1;
            printf("%d\n", i);
            break;
        }
    }
    if(f == 0)
    {
        printf("-1\n");
    }

    return 0;
}
