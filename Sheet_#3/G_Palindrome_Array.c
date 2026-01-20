#include<stdio.h>
int main()
{
    int n, f=1;
    scanf("%d", &n);
    long long arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for(int i=0,j=n-1; i<j; i++,j--)
    {
        if(arr[i] != arr[j])
        {
            f=0;
        }
    }

    if(f == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
