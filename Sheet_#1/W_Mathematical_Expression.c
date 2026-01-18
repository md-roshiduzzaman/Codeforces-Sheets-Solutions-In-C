#include<stdio.h>
int main()
{
    long long a, b, c, sum, sub, mul;
    char s, q;
    scanf("%lld %c %lld %c %lld", &a, &s, &b, &q, &c);

    sum = a+b;
    sub = a-b;
    mul = a*b;
    
    if(s == '+' && q == '=')
    {
        if(a+b == c)
        {
            printf("Yes\n");
        }
        else
        printf("%lld\n", sum);
    }
    else if(s == '-' && q == '=')
    {
        if(a-b == c)
        {
            printf("Yes\n");
        }
        else
        printf("%lld\n", sub);
    }
    else if(s == '*' && q == '=')
    {
        if(a*b == c)
        {
            printf("Yes\n");
        }
        else
        printf("%lld\n", mul);
    }
    
    return 0; 
}
