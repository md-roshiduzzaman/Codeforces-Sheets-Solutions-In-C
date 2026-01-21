#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    fgets(s, 1000001, stdin);
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] == '\\')
        break;
        else
        printf("%c", s[i]);
    }
    return 0;
}
