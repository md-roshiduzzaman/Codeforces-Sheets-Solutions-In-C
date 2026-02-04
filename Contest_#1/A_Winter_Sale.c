#include<stdio.h>
int main()
{
    double x, p;
    scanf("%lf%lf", &x, &p);
  
    double ans;
    ans = (100*p)/(100-x);
    printf("%.2f\n", ans);
  
    return 0;
}
