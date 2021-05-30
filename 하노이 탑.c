#include <stdio.h>

void hanoi_tower(int n, char from, char temp, char to)
{
    if (n == 1)
        printf("%c에서 %c로 원판 1을 옮긴다.\n", from, to);
    else
    {
        hanoi_tower(n - 1, from, to, temp);
        printf("%c에 있는 원판 %d를 %c로 옮긴다.\n", from, n, to);
        hanoi_tower(n - 1, temp, from, to);
    }
}

int main_hanoi(void)
{
    int n;
    printf("하노이탑 입력 : ");
    scanf("%d", &n);
    hanoi_tower(n, 'A', 'B', 'C');
}
