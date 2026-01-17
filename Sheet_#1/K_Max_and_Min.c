#include<stdio.h>
int main()
{                                  // this is the most basic way to solve this problem.
    int a, b, c, max, min;         // there are few more easy and shortcut way to solve this.
    scanf("%d%d%d", &a, &b, &c);

    if(a>=b && a>=c)
    {
        if(b>=c)
        {
            max = a;
            min = c;
        }
        else if(c>=b)
        {
            max = a;
            min = b;
        }
    }

    else if(b>=a && b>=c)
    {
        if(a>=c)
        {
            max = b;
            min = c;
        }
        else if(c>=a)
        {
            max = b;
            min = a;
        }
    }

    else if(c>=a && c>=b)
    {
        if(a>=b)
        {
            max = c;
            min = b;
        }
        else if(b>=a)
        {
            max = c;
            min = a;
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}
