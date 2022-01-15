#include <stdio.h>

int main()
{

  double a, b, c;

  while (scanf("%lf", &a) != EOF)
  {

    printf("%.1lf\n", a / 5 * 9 + 32);
  }
}
