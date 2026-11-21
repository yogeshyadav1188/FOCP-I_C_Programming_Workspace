#include <stdio.h>

int countMultiples(int n, int k)
{
    if (k <= 0 || n <= 0)
        return 0;

    return n / k;
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    printf("%d\n", countMultiples(n, k));

    return 0;
}