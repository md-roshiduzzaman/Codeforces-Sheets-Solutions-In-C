#include<stdio.h>
int main()
{
    long long n, rem, rev=0;
    scanf("%lld", &n);
    long long temp = n;

    while(temp != 0)
    {
        rem = temp%10;
        rev = rev*10+rem;
        temp = temp/10;
    }

    printf("%lld\n", rev);
 
    if(rev == n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}
