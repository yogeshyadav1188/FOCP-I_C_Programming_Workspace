#include <stdio.h>

int main()
{
    int n, found = 0;
    scanf("%d", &n);

    for (int a = 1; a <= n; a++)
    {
        for (int b = a + 1; b <= n; b++)
        {
            for (int c = b + 1; c <= n; c++)
            {
                if (1LL*a*a + 1LL*b*b == 1LL*c*c)
                {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (!found)
        printf("None\n");

    return 0;
}