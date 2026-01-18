#include<stdio.h>
int main()
{
    long long a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);

    if(a>=b && a>=c)
    {
        if(b>=c)
        {
            printf("%lld\n%lld\n%lld\n\n", c, b, a);
        }
        else
        {
            printf("%lld\n%lld\n%lld\n\n", b, c, a);
        }
    }
    else if(b>=a && b>=c)
    {
        if(a>c)
        {
            printf("%lld\n%lld\n%lld\n\n", c, a, b);
        }
        else
        {
            printf("%lld\n%lld\n%lld\n\n", a, c, b);
        }
    }
   else if(c>=a && c>=b)
        {
            if(a>b)
            {
                printf("%lld\n%lld\n%lld\n\n", b, a, c);
            }
            else
            {
                printf("%lld\n%lld\n%lld\n\n", a, b, c);
            }
        }

    printf("%lld\n%lld\n%lld\n", a, b, c);
    
    return 0;
 
}
