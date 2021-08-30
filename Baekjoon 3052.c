#include <stdio.h>

int main(void)
{
	int N[42] = { 0,};
	int A, cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &A);
		if (N[A % 42]++ == 0)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
