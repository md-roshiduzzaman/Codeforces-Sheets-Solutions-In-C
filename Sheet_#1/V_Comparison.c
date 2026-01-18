#include<stdio.h>
int main()
{
    long long a, b;
    char c;
    scanf("%lld %c %lld", &a, &c, &b);

    if(a>b && c=='>')
    {
        printf("Right\n");
    }
    else if(a<b && c=='<')
    {
        printf("Right\n");
    }
    else if(a==b && c=='=')
    {
        printf("Right\n");
    }
    else
    {
        printf("Wrong\n");
    }
    
    return 0;
}
