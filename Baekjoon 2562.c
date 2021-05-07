#include <stdio.h>

int main(void)
{
	int index, max = 0;
	int num[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
		if (max < num[i])
		{
			max = num[i];
			index = i+1;
		}
	}
	printf("\n%d\n%d", max, index);
	return 0;
}

