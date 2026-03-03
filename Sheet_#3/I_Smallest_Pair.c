#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=1; i<=n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int min_val = arr[1]-1;
        int ans = INT_MAX;

        for(int j=2; j<=n; j++)
        {
            int pre_val = min_val + arr[j]+j;
            if(pre_val < ans)
            {
                ans = pre_val;
            }
            if(arr[j]-j < min_val)
            {
                min_val = arr[j]-j;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
