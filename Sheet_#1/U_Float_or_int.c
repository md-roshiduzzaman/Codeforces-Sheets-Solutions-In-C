#include<stdio.h>
int main()
{
    float n;
    int part;
    scanf("%f", &n);

    part = (int)n;

    if(n == part)
    {
        printf("int %d\n", part);
    }
    else
    {
        printf("float %d %.3f\n", part, n-part);
    }

    return 0;
}
