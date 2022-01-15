#include <stdio.h>

int main()
{

  int a, b, c;

  while (scanf("%d %d", &a, &b) != EOF)
  {

    if (a <= 100 && a >= 0 && b >= 0 && b <= 100)
      printf("inside\n");
    else
      printf("outside\n");
  }
}
