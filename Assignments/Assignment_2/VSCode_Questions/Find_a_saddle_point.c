#include <stdio.h>

int main()
{
    int r, c, a[100][100], found = 0;

    scanf("%d%d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r && !found; i++)
    {
        for (int j = 0; j < c && !found; j++)
        {
            int rowMin = 1, colMax = 1;

            for (int k = 0; k < c; k++)
            {
                if (a[i][k] < a[i][j])
                    rowMin = 0;
            }

            for (int k = 0; k < r; k++)
            {
                if (a[k][j] > a[i][j])
                    colMax = 0;
            }

            if (rowMin && colMax)
            {
                printf("%d %d %d\n", i, j, a[i][j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("None\n");

    return 0;
}