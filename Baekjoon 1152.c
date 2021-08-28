#include<stdio.h>

int main(void)
{
	char N[1000000];
	gets(N);
	int i, cnt = 1;

	for (i = 0; i < strlen(N); i++)
	{
		if (N[i] == ' ')
			cnt++;
	}

	if (N[0] == ' ') 
		cnt--;
	if (N[strlen(N) - 1] == ' ') 
		cnt--;

	printf("%d", cnt);
	return 0;
}
