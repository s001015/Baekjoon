#include <stdio.h>

int a[10001];

int main(void)
{
    int N, M= 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &M);
        a[M]++;
    }

    for (int i = 1; i <= 10000; i++) 
    {
        for (int j = 0; j < a[i]; j++)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
