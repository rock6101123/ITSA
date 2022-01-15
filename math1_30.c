#include <stdio.h>
int main()
{

    int a, b, c;

    while (scanf("%d", &a) != EOF)
    {
        int time = 0;
        for (int j = 1; j * j <= a; j++)
        {
            if (a % j == 0)
                time++;
        }
        if (a > 1 && time == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
