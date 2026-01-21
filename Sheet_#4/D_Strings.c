#include<stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11], temp;
    scanf("%s", a);
    scanf("%s", b);
 
    printf("%d %d\n", (int)strlen(a), (int)strlen(b));
    printf("%s%s\n", a,b);
 
    temp = a[0];
    a[0]=b[0];
    b[0]=temp;
 
    printf("%s %s", a, b);
 
    return 0;
}
