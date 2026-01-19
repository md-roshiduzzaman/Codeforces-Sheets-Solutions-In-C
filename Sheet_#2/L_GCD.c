#include<stdio.h>
int main()
{
    int n1, n2, rem, gcd;
    scanf("%d%d", &n1, &n2);

    while(n2 != 0)
    {
        rem = n1%n2;
        n1=n2;               //  Euclidean Algorithm to find GCD
        n2=rem;
    }

    gcd=n1;
    printf("%d\n", gcd);

    return 0;
}
