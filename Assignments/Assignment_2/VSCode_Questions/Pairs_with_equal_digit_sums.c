#include <stdio.h>

int digitSum(int n)
{
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    int n, a[1000], count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (digitSum(a[i]) == digitSum(a[j]))
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}