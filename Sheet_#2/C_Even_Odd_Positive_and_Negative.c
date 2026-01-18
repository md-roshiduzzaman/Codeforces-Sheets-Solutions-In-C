#include<stdio.h>
int main()
{
    int n, number;
    int count1=0, count2=0, count3=0, count4=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &number);
        if(number%2 == 0)
        {
            count1++;
        }
        if(number%2 != 0)
        {
            count2++;
        }
        if(number>0)
        {
            count3++;
        }
        if(number<0)
        {
            count4++;
        }
    }
    printf("Even: %d\n", count1);
    printf("Odd: %d\n", count2);
    printf("Positive: %d\n", count3);
    printf("Negative: %d\n", count4);
    
 
    return 0;
}
