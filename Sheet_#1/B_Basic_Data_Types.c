#include<stdio.h>

int main()
{
  int num = 0;
  long long int l = 0;
  char s;
  float f;
  double d;
  scanf("%d %lld %c %f %lf", &num, &l, &s, &f, &d);
  printf("%d\n", num);
  printf("%lld\n", l);
  printf("%c\n", s);
  printf("%.2f\n", f);
  printf("%.1f", d);
  
  return 0;
}
