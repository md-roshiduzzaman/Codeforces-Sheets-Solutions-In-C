#include<stdio.h>
#include<string.h>
int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    char code[10];
    scanf("%s", code);
    int len = strlen(code);

    if(len != a+b+1)
    {
        printf("No\n");
        return 0;
    }
    if(code[a] != '-')
    {
        printf("No\n");
        return 0;
    }

    for(int i=0; i<len; i++)
    {
        if(i == a)
        {
            continue;
        }
        if(code[i] < '0' || code[i] > '9')
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}
