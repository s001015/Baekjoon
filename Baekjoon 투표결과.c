//투표결과를 이용하여 후보자 득표수 처리 알고리즘 만들기
#include <stdio.h>
#define SIZE 16

int main(void)
{
	int freq[SIZE] = { 0 };   //빈도를 나타내는 배열
	int i, candidate;

	while (1)
	{
		printf("몇번 후보자를 선택하시겠습니까?(종료-1): ");
		scanf("%d", &candidate);
		if (candidate < 0) break;
		freq[candidate]++;  //해당 빈도 증가
	}
	printf("----------------------------------------------\n");

	printf("     값  득표결과\n\n");
	for (i = 1; i < SIZE; i++)
		printf("    %3d %3d \n", i, freq[i]);

	return 0;
}
