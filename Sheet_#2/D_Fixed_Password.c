#include<stdio.h>
int main()
{
    for(int i=1000; ; i++)
    {
        int n;
        scanf("%d", &n);
      
        if(n != 1999)
        {
            printf("Wrong\n");
        }
        else if(n == 1999)
        {
            printf("Correct\n");
            break;
        }
    }
 
    return 0;
}
