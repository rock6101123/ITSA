#include <stdio.h>
#include <math.h>
int arr[100000];

int F91(int n)
{

    if (n <= 100)
        return F91(F91(n + 11));
    else if (n > 100)
        return n - 10;
}

int main()
{

    int a, b, c;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        printf("%d\n", F91(b));
    }
}
