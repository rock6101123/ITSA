#include <stdio.h>
#include <math.h>
int arr[100000];
int main()
{

    int a, b, c;

    while (scanf("%d", &a) != EOF)
    {
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
            printf("Bissextile Year\n");
        else
            printf("Common Year\n");
    }
}
