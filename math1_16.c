#include <stdio.h>
#define pi 3.14159

int main()
{

  int a, b, c;

  while (scanf("%d %d", &a, &b) != EOF)
  {

    float pattern = 100 * 100 * pi;
    float ans = (a * a + b * b) * pi;
    if (ans <= pattern)
      printf("inside\n");
    else
      printf("outside\n");
  }
}
