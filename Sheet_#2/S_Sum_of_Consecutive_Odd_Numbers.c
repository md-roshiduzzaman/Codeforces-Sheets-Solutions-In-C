#include<stdio.h>
int main()
{
    int n, n1, n2;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d%d", &n1, &n2);

        int start = n1<n2 ? n1:n2;
        int end = n1>n2 ? n1:n2;
        int sum=0;

        for(int j=start; j<=end; j++)
        {
            if(j != start && j != end && j%2 != 0)
            {
                sum = sum+j;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
