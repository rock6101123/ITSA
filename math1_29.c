#include <stdio.h>
#include <math.h>
int main()
{

    int a, b, c;

    while (scanf("%d", &a) != EOF)
    {
        for (int i = a - 1; i > 1; i--)
        {
            int time = 0;
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                    time++;
            }
            if (time == 1)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
}
