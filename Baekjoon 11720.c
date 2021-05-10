#include<stdio.h>

int main_11720(void) 
{
    int N, sum = 0;
    scanf("%d", &N);
    char num[101];
    scanf("%s", &num, sizeof(num));
    for (int i = 0; i < N; i++)
    {
        sum += num[i] - '0';
    }
    printf("%d", sum);

    return 0;
}
