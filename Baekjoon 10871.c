#include<stdio.h>

int main(void)
{
    int N, X, input;
    scanf("%d %d", &N, &X);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &input);
        if (X > input)
            printf("%d ", input);
    }
    return 0;
}
