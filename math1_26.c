#include <stdio.h>

int main()
{

  int a, b, c;

  while (scanf("%d", &a) != EOF)
  {

    for (int i = 1; i <= a; i++)
      printf("%d*%d=%d\n", i, i, i * i);
  }
}
