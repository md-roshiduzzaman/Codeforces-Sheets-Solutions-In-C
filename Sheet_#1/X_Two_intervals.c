#include <stdio.h>
int main()
{
    int l1, r1, l2, r2, start, end;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    if ((l2 < l1 && r2 < l1) || (l2 > r1 && r2 > l2))
    {
        printf("-1");
    }
    else
    {
        if (l1 > l2)
        {
            start = l1;
        }
        else
        {
            start = l2;
        }

        if (r1 > r2)
        {
            end = r2;
        }
        else
        {
            end = r1;
        }

        printf("%d %d", start, end);
    }

    return 0;
}
