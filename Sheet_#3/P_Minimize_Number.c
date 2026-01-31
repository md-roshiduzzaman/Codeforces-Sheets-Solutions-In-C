#include <stdio.h>
int main()
{
    int n, count;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = 1000;

    for (int i = 0; i < n; i++)
    {
        count = 0;

        while (arr[i] % 2 == 0)
        {
            arr[i] = arr[i] / 2;
            count++;
        }

        if (count < ans)
        {
            ans = count;
        }
    }

    printf("%d\n", ans);

    return 0;
}
