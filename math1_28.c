#include <stdio.h>

int main()
{

  int a, b, c;

  while (scanf("%d", &a) != EOF)
  {

    for (int i = 0; i <= a; i += 35)
      if (i % 35 == 0 && i + 35 < a && i != 0)
        printf("%d ", i);
      else if (i % 35 == 0 && i + 35 >= a && i != 0)
        printf("%d\n", i);
  }
}
