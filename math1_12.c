#include <stdio.h>

int main()
{

  int a, b, c;

  while (scanf("%d", &a) != EOF)
  {

    float ans = a * 100 / 23.8 + 1;
    printf("%d\n", (int)ans);
  }
}
