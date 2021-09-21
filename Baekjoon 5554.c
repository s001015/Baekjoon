#include <stdio.h>

int main(void)
{
    int x, y;
    int sum = 0, i;

    for (i = 0; i < 4; i++) 
    {
        scanf_s("%d", &y);
        sum += y;
    }

    x = sum / 60;
    y = sum % 60;
    printf("%d\n", x);
    printf("%d", y);
}
