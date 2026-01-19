#include<stdio.h>
int main()
{
    char s;
    int n, numbers;
    scanf("%c", &s);
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &numbers);

        for(int j=1; j<=numbers; j++)
        {
            printf("%c", s);
        }
        
        printf("\n");
    }

    return 0;
}
