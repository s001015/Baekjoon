#include<stdio.h>

int main_2588(void)
{
	int A, B;
	scanf_s("%d", &A);
	scanf_s("%d", &B);

	printf("%d\n", A * (B % 10));
	printf("%d\n", A * ((B / 10) % 10));
	printf("%d\n", A * ((B / 100) % 10));
	printf("%d\n", A * B);
	return 0;
}
