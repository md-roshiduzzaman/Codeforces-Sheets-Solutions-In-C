#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    int sum=0;
    scanf("%s", a);
  
    for(int i=0; a[i] != '\0'; i++)
    {
        sum = sum+(a[i] - '0');
    }
    printf("%d\n", sum);
  
    return 0;
}
