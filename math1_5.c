#include <stdio.h>

int main()
{

  float a;

  while (scanf("%f", &a) != EOF)
  {

    int area = a * a * 100;
    if (area % 10 >= 5)
      area += 10;
    printf("%.1f\n", (float)area / 100);
  }
}
