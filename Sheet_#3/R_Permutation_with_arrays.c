#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    long long a[n], b[n];
    
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                long long temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
 
    for(j=0; j<n; j++)
    {
        scanf("%lld", &b[j]);
    }
    for(j=0; j<n; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(b[i] > b[i+1])
            {
                long long temp = b[i];
                b[i] = b[i+1];
                b[i+1] = temp;
            }
        }
    }
    int f=1;
    for(i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            f=0;
            break;
        }
    }
 
    if(f==1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
