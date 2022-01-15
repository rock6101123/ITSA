#include <stdio.h>
int main()
{

    int a, b, c;

    while (scanf("%d", &a) != EOF)
    {
        int sum = 0;
        for (int j = 1; j <= a; j++)
        {
            if (j % 2 == 0 && j % 3 == 0 && j % 12 != 0)
                sum += j;
        }
        printf("%d\n", sum);
    }
}
