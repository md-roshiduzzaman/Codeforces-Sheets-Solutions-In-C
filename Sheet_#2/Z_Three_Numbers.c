#include<stdio.h>
int main()
{
    long long k, s, x, y, z, count=0;
    scanf("%lld%lld", &k, &s);

    for(x=0; x<=k; x++)
    {
        for(y=0; y<=k; y++)
        {
            z = s -(x+y);

            if(z>=0 && z<=k)
            {
                count++;
            }
        }
    }

    printf("%lld\n", count);

    return 0;
}
