#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    int f=1;
    scanf("%s", a);
    int len = strlen(a);

    for(int i=0, j=len-1; i<j; i++, j--)
    {
        if(a[i] != a[j])
        {
            f=0;
            break;
        }
    }

    if(f == 1)
    {
        printf("YES\n");
    }
    else if(f == 0)
    {
        printf("NO\n");
    }

    return 0;
}
