#include <stdio.h>

int main()
{

  float a, b, c;

  while (scanf("%f %f", &a, &b) != EOF)
  {

    if (a >= 0 && a <= 60)
      printf("%.1f\n", a * b);
    else if (a > 60 && a <= 120)
    {
      int ans = (a - 60) * b * 1.33 * 100 + 60 * b * 100;
      if (ans % 10 >= 5)
        ans += 10;
      printf("%.1f\n", (float)ans / 100);
    }
    else if (a > 120)
    {
      int ans = (a - 120) * b * 1.66 * 100 + 60 * b * 1.33 * 100 + 60 * b * 100;
      if (ans % 10 >= 5)
        ans += 10;
      printf("%.1f\n", (float)ans / 100);
    }
  }
}
