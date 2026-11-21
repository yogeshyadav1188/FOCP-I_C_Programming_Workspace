#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (n < 2)
    {
        printf("0\n");
        return 0;
    }

    long long minDiff = llabs((long long)a[0] - a[1]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long diff = llabs((long long)a[i] - a[j]);

            if (diff < minDiff)
                minDiff = diff;
        }
    }

    printf("%lld\n", minDiff);

    return 0;
}