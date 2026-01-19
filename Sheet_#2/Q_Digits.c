#include<stdio.h>
int main()
{
    int n, numbers, rev, temp;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &numbers);
        if(numbers == 0)
        {
            printf("0\n");
            continue;
        }

        temp = numbers;
        while(temp != 0)
        {
            rev = temp%10;
            temp = temp/10;
            printf("%d ", rev);
        }
        
        printf("\n");
    }

    return 0;
}
