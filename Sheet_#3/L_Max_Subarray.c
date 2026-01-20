#include<stdio.h>
int main()
{
    int t, n, max;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int arr[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int st, end;

        for(st=0; st<n; st++)
        {
            int max = arr[st];
            for(end=st; end<n; end++)
            {
                if(arr[end] > max)
                {
                    max = arr[end];
                }
                printf("%d ", max);
            }
        }
        
        printf("\n");
    }

    return 0;
}
