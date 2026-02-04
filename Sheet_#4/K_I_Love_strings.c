#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);

    while(n--)
    {
        char s[55], t[55];
        scanf("%s %s", s, t);

        int len_s = strlen(s);
        int len_t = strlen(t);
        int max_len = (len_s > len_t) ? len_s : len_t;

        for(int i=0; i<max_len; i++)
        {
            if(i < len_s)
            {
                printf("%c", s[i]);
            }
            if(i < len_t)
            {
                printf("%c", t[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
