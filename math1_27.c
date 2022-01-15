#include <stdio.h>

int main()
{

  int a, b, c;

  while (scanf("%d %d", &a, &b) != EOF)
  {
    int tmp;
    if (a > b)
      tmp = a, a = b, b = tmp;
    printf("%d\n", (b - a + 1) * (b + a) / 2);
  }
}
