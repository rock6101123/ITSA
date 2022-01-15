#include <stdio.h>
#include <math.h>
int arr[100000];
int main()
{

    int a, b, c;

    while (scanf("%d", &a) != EOF)
    {
        if (a >= 3 && a <= 5)
            printf("Spring\n");
        else if (a >= 6 && a <= 8)
            printf("Summer\n");
        else if (a >= 9 && a <= 11)
            printf("Autumn\n");
        else if ((a >= 1 && a <= 2) || a == 12)
            printf("Winter\n");
    }
}