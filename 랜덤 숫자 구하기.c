//1부터 100까지의 랜덤 숫자 구하는 프로젝트
#include<stdlib.h>
#include<stdio.h>

int main_random(void)
{
	srand(time(NULL));
	int num = rand() % 100 + 1;              // 1~100 사이의 숫자
	printf("(정답 숫자 : %d)\n", num);
	int guess;                          //정답
	int tries = 0;                     //시도 횟수

	do
	{
		printf("\n정답을 추측하여 보시오 (1~100): ");
		scanf_s("%d", &guess);
		tries++;
		if (guess > num)                               //사용자가 입력한 정수가 정답보다 높으면
			printf("제시한 정수가 높습니다.\n");
		if (guess < num)                              //사용자가 입력한 정수가 정답보다 낮은면
			printf("제시한 정수가 낮습니다.\n");
	} 
	while (guess != num);
	printf("축하합니다. 시도횟수 = %d\n", tries);

	return 0;
}
