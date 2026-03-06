#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int BinarySearch(int arr[], int n, int x)
{
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;

        if (x == arr[mid])
        {
            return 1;
        }
        else if (x > arr[mid])
        {
            st = mid + 1;
        }
        else if (x < arr[mid])
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    while (q--)
    {
        int x;
        scanf("%d", &x);

        if (BinarySearch(arr, n, x))
        {
            printf("found\n");
        }
        else
        {
            printf("not found\n");
        }
    }
    return 0;
}
