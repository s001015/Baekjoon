#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j, k, n, m;
	char s[21];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %s", &m, s, 21);

		for (j = 0; j < strlen(s); j++)
		{
			for (k = 0; k < m; k++)
				printf("%c", s[j]);
		}
		printf("\n");
	}
	return 0;
}

