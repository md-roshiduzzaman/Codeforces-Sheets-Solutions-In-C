#include <stdio.h>
int main()
{
    char s;
    scanf("%c", &s);
    
    if (s >= 'A' && s <= 'Z')
    {
        printf("%c\n", s+32);
    }   
    else if (s >= 'a' && s <= 'z')
    {
        printf("%c\n", s-32);
    }
 
    return 0;
}
