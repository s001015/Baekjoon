#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 1
#define FAIL 2
#define LIMIT 5

int check(int ID, int PASSWARD);

int main(void)
{
	int ID, PASSWARD, result;
	while (1)
	{
		printf("아이디를 입력하세요 : \b");
		scanf_s("%d", &ID);
		printf("패스워드를 입력하세요 : \b");
		scanf_s("%d", &PASSWARD);
		result = check(ID, PASSWARD);
		if (result == SUCCESS) break;
	}
	printf("로그인 성공\n");
	return 0;
}
int check(int ID, int PASSWARD)
{
	static int TRUE_ID = 1111;
	static int TRUE_PASSWARD = 0000;
	static int count = 0;
	count++;

	if (count >= LIMIT) 
	{
		printf("횟수 초과\n");
		exit(1);
	}
	if (ID == TRUE_ID && PASSWARD == TRUE_PASSWARD)
		return SUCCESS;
	else if (ID != TRUE_ID && PASSWARD != TRUE_PASSWARD)
	{
		printf("\n");
		printf("※잘못된 아이디나 비밀번호 입니다.\n\n");
	}
	else
		return FAIL;
}
