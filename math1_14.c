#include <stdio.h>

int main()
{

  long long int a, b, c;

  while (scanf("%lld", &a) != EOF)
  {

    printf("%lld days\n", a / 86400);
    a %= 86400;
    printf("%lld hours\n", a / 3600);
    a %= 3600;
    printf("%lld minutes\n", a / 60);
    a %= 60;
    printf("%lld seconds\n", a);
  }
}
