#include <stdio.h>

int main(void)
{
    int num[5];
    int i, sum = 0, result = 0;
    
    for (int i = 0; i < 5; i++)
        scanf("%d", &num[i]);
    for (i = 0; i < 5; i++)
    {
        sum = num[i] * num[i];
        result = result + sum;
    }
    printf("%d\n", result % 10);
    return 0;
}
