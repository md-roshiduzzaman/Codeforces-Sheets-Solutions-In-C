#include<stdio.h>
#include<string.h>
int main()
{
    char st1[1001], st2[1001];
    scanf("%s%s", st1, st2);

    int len1 = strlen(st1);
    int len2 = strlen(st2);

    printf("%d %d\n", len1, len2);
    printf("%s %s\n", st1, st2); 

    return 0;
    
}
