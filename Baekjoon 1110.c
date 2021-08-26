#include <stdio.h>

int main(void)
{
	int N, M, cnt = 0;
	scanf_s("%d", &N);
	M = N;
	do 
	{
		N = N % 10 * 10 + (N / 10 + N % 10) % 10;
		cnt++;
	}
	while (N != M);

	printf("%d", cnt);
	return 0;
}
