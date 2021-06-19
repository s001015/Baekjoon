#include <stdio.h>

int main(void)
{
    int M, D;
    scanf_s("%d %d", &M, &D);

    if (M > 2)
        printf("After");
    else if (M < 2)
        printf("Before");
    else {
        if (D < 18)
            printf("Before");
        else if (D > 18)
            printf("After");
        else
            printf("Special");
    }
    return 0;
}
