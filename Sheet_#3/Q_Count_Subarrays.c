#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
 
        int len=1, ans=1;
 
        for(int i=1; i<n; i++)
        {
            if(arr[i] >= arr[i-1])
            {
                len++;
            }
            else
            {
                len = 1;
            }
 
            ans += len;
        }
        printf("%d\n", ans);
 
    }
 
    return 0;
}
