#include<stdio.h>
#include<string.h>

int main(void)
{
	int N;
	char S[100];

	scanf_s("%s", &S, sizeof(S));

	for (int i = 0; i < 26; i++) 
	{
		N = -1;
		for (int j = 0; j < strlen(S); j++)
		{
			if (97 + i == S[j])
			{
				N = j;
				break;
			}
		}
		printf("%d ", N);
	}
  return 0;
}
