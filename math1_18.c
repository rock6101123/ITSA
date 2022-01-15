#include <stdio.h>

int main()
{

  int a, b, c;

  while (scanf("%d", &a) != EOF)
  {

    int arr[8] = {0};
    int i = 7;
    if (a >= 0)
    {
      while (a != 0)
      {
        arr[i] = a % 2;
        i--;
        a /= 2;
      }
      for (int j = 0; j < 8; j++)
        printf("%d", arr[j]);
      printf("\n");
    }
    else if (a < 0)
    {
      a = a * -1 - 1;
      while (a != 0)
      {
        arr[i] = a % 2;
        i--;
        a /= 2;
      }
      for (int j = 0; j < 8; j++)
      {
        if (arr[j] == 0)
          printf("1");
        else
          printf("0");
      }
      printf("\n");
    }
  }
}
