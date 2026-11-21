#include <stdio.h>

int main()
{
    char s[1000];
    scanf("%999s", s);

    for (int i = 0; s[i] != '\0'; )
    {
        int count = 1;

        while (s[i] == s[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", s[i], count);
        i++;
    }

    printf("\n");

    return 0;
}