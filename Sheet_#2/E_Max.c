#include<stdio.h>
int main()
{
    int n, numbers, max=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &numbers);

        if(numbers>max)
        {
            max = numbers;
        }
    }
    
    printf("%d\n", max);
 
    return 0;
}
