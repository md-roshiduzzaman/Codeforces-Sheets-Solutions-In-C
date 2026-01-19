#include<stdio.h>
int main()
{
    int n1, n2, sum;

    while(1)
    {
        scanf("%d%d", &n1, &n2);
        if(n1<=0 || n2<=0)
        {
            break;
        }

        sum=0;

        int start = n1<n2 ? n1:n2;
        int end = n1<n2 ? n2:n1;

        for(int i=start; i<=end; i++)
        {
            sum = sum+i;
            printf("%d ", i);
        }
        
        printf("sum =%d\n", sum);
    }

    return 0;
}
