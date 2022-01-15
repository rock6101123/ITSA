#include <stdio.h>
#include <math.h>
int arr[100000];
int main()
{

    int a, b, c;

    while (scanf("%d", &a) != EOF)
    {
        int i = 0;
        for (int j = 1; j <= a; j++)
        {
            if (a % j == 0)
            {
                arr[i] = j;
                i++;
            }
        }
        for (int j = 0; j < i - 1; j++)
            printf("%d ", arr[j]);
        printf("%d\n", arr[i - 1]);
    }
}
