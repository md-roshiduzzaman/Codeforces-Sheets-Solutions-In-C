#include<stdio.h>
#include<math.h>
int main()
{
    int A, B, f, c, r;
    scanf("%d%d", &A, &B);
    
    f = floor((double)A/B);
    c = ceil((double)A/B);
    r = round((double)A/B);


    printf("floor %d / %d = %d\n", A, B, f);
    printf("ceil %d / %d = %d\n", A, B, c);
    printf("round %d / %d = %d\n", A, B, r);


    return 0;
}
