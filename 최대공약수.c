//while문을 이용하여 최대공약수 구하기
#include <stdio.h> 
int main_cled(void)
{ 
	int x, y, r;
	printf("정수 두 개를 입력하시오 : ");
	scanf_s("%d %d", &x, &y);

	while(y != 0)
	{
		r = x % y ;
		x = y ;
		y = r ;      	// 유클리드의 최대공약수 구하는 알고리즘
	}

	printf("최대공약수는 %d입니다.\n", x);
	return 0; 
}
