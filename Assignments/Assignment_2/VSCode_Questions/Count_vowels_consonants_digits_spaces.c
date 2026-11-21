#include <stdio.h>

int main()
{
    char s[1000];
    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
            vowels++;

        else if (ch >= 'a' && ch <= 'z')
            consonants++;

        else if (ch >= '0' && ch <= '9')
            digits++;

        else if (ch == ' ')
            spaces++;
    }

    printf("%d %d %d %d\n",
           vowels, consonants, digits, spaces);

    return 0;
}