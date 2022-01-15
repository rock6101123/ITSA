#include <stdio.h>
long long int Pow(int a)
{
  long long int ans = 1;
  for (int i = 0; i < a; i++)
    ans *= 2;

  return ans;
}

int main()
{

  int a;

  while (scanf("%d", &a) != EOF)
  {

    if (a <= 31)
    {
      printf("%lld\n", Pow(a));
    }
    else
      printf("Value of more than 31\n");
  }
}
