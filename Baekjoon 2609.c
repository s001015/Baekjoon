#include <stdio.h>

int main(void)
{
    int A, B;
    int x, y, r;

    scanf("%d %d", &A, &B);
    x = A, y = B;

    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    printf("%d\n%d", x, A * B / x);
    return 0;
}
