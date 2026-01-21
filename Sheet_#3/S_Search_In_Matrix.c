#include<stdio.h>
int main()
{
    int m, n, f=0;
    scanf("%d%d", &m, &n);
    int arr[m][n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j] == x)
            {
                f=1;
                break;
            }
        }
    }

    if(f == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}
