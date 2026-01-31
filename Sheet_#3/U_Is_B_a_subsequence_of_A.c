#include<stdio.h>
int main()
{
    long long  n, m;
    scanf("%lld%lld", &n, &m);

    long long A[n], B[m];

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &A[i]);
    }

    for(int j=0; j<m; j++)
    {
        scanf("%lld", &B[j]);
    }

    int i=0, j=0;

    while(i<n && j<m)
    {
        if(A[i] == B[j])
        {
            j++;
        }
        i++;
    }

    if(j == m)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
