#include <stdio.h>

int main(void) {

	int arr[8];
	int i, cnt = 0;
  
	for (i = 0; i < 8; i++)
		scanf("%d", &arr[i]);
	
		for (i = 0; i < 8; i++) 
		{
			if (arr[0] == 1) {
				if (i + 1 == arr[i])
					cnt++;
			}
			else if (8 - i == arr[i])
				cnt--;
		}
	
	if (cnt == 8)
		printf("ascending");
	else if (cnt == -8)
		printf("descending");
	else
		printf("mixed");

	return 0;
}
