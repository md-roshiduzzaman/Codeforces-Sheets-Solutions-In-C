#include<stdio.h>

static char st[10000001];

int main()
{
    scanf("%s", st);

    long long count[26] = {0};

    for(int i=0; st[i] != '\0'; i++)
    {
        count[st[i] - 'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(count[i] > 0)
        {
            printf("%c : %lld\n", i+'a', count[i]);
        }
    }

    return 0;
}
