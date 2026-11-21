#include <stdio.h>

int main()
{
    int n, a[100][100], symmetric = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][j] != a[j][i])
                symmetric = 0;
        }
    }

    if (symmetric)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}