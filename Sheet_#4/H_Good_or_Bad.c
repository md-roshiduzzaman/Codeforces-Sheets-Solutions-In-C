#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    while(n--)
    {
        char a[100001];
        scanf("%s", a);
        int isg=0;
        int ln= strlen(a);
        
        for(i=0; i<ln-2; i++)
        {
            if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0' || a[i]=='1' && a[i+1]=='0' && a[i+2]=='1')
            isg=1;
        }
 
        if(isg == 1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
 
    return 0;
}
