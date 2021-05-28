#include<stdio.h>

int main(void)
{
	int n = 1;
	int i;

	printf("구구단 값 출력 \n");

	while (n < 10)  //1단부터 9단까지 구현
	{
		int i = 1;
		printf("\n%d단 출력\n", n); //1부터 9까지의 곱을 구현

		while (i < 10)
		{
			printf("%d * %d = %d\n", n, i, n * i);
			i++;
		}
		n++;
	}
	return 0;
}
