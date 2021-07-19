//tic-tac-toe 게임 프로그램
#include <stdio.h>

int main(void)
{
	char board[3][3];  //2차원 배열을 정해준다.
	int x, y, k, i;

	for (x = 0; x < 3; x++)  
	{
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';
	}

	for (k = 0; k < 9; k++) 
	{
		do {
			printf("(x, y) 좌표\n(-1 -1 입력시 종료합니다.): ");  //보드를 화면에 출력
			scanf("%d  %d", &x, &y);   //사용자로부터 좌표 x,y를 받음
			if (x == -1 && y == -1)
				return 1;

		} while (board[x][y] != ' ');

		if (board[x][y] == 'X' || board[x][y] == 'O')
		{
			printf("선택한 좌표입니다. 다른 좌표를 선택하세요.\n");
			continue;  //선택된 좌표는 선택하지 못함
		}
		board[x][y] = (k % 2 == 0) ? 'O' : 'X';  

		for (i = 0; i < 3; i++) 
		{
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
	}
	return 0;
}
