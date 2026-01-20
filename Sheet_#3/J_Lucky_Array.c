#include<stdio.h>
int main()
{
    int n, min, count=0;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i] <= min)
        {
            min = arr[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] == min)
        {
            count++;
        }
    }

    if(count % 2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}
