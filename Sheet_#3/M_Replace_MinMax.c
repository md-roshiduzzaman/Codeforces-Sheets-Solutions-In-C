#include<stdio.h>
int main()
{
    long long n, i, max, min;
    scanf("%lld", &n);
    long long a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long maxVal=a[0], maxPos=0;
    long long minVal=a[0], minPos=0;
    
    for(i=0; i<n; i++)
    {
        if(a[i] < minVal)
        {
            minVal=a[i];
            minPos=i;
        }
        
        if(a[i] > maxVal)
        {
            maxVal=a[i];
            maxPos=i;
        }
    }
 
    long long temp=a[minPos];
    a[minPos]=a[maxPos];
    a[maxPos]=temp;
 
    for(i=0; i<n; i++)
    {
        printf("%lld ", a[i]);
    }
 
    return 0;
}
