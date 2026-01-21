#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, sum1=0, sum2=0;
    scanf("%d",&n);
    int arr [n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                sum1 = sum1 + arr[i][j];
            }

            if((i+j) == (n-1))
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }

    int ans = abs(sum1 - sum2);
    printf("%d\n",ans);

    return 0;
}
