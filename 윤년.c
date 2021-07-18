#include<stdio.h>

int main(void)
{
	int year;
	int y;
	printf("년도를 입력하세요 : ");
	scanf("%d", &year);

	y = (year + ((year - 1) - ((year - 1) / 100) + ((year - 1) / 400)) % 7);

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		printf("%d 년은 윤년입니다 \n", year);
		switch (y) {
		case 0:
			printf("January, April, July.\n");
			break;
		case 1:
			printf("September, December. \n");
			break;
		case 2:
			printf("June.\n");
			break;
		case 3:
			printf("March, November.\n");
			break;
		case 4:
			printf("February, August.\n");
			break;
		case 5:
			printf("May.\n");
			break;
		case 6:
			printf("October.\n");
			break;
		}
	}
	else
	{
		printf("%d 년은 윤년이 아닙니다. \n", year);
		switch (y)
		{
		case 0:
			printf("January,October .\n");
			break;
		case 1:
			printf("April, July. \n");
			break;
		case 2:
			printf("September, December.\n");
			break;
		case 3:
			printf("June.\n");
			break;
		case 4:
			printf("February, March, November.\n");
			break;
		case 5:
			printf("August.\n");
			break;
		case 6:
			printf("May.\n");
			break;
		}
	}
	return 0;
}
