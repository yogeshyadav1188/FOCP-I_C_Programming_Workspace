#include <stdio.h>

long long area(long long length, long long width)
{
    return length * width;
}

int main()
{
    long long l, w;
    scanf("%lld%lld", &l, &w);

    printf("%lld\n", area(l, w));

    return 0;
}