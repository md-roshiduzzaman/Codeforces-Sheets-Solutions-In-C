#include <stdio.h>
int main()
{
    char ch, ans;
    scanf("%c", &ch);
    ans = ch + 1;

    if (ch == 'z')
    {
        printf("a\n");
    }
    else
    {
        printf("%c\n", ans);
    }

    return 0;
}
