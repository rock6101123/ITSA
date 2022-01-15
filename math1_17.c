#include <stdio.h>

int GCD(int a, int b)
{
  return b == 0 ? a : GCD(b, a % b);
}
int main()
{

  int a, b, c;

  while (scanf("%d %d", &a, &b) != EOF)
  {

    printf("%d\n", GCD(a, b));
  }
}
