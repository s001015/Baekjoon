#include<stdio.h>
#define MAX 100 

int main(void) 
{
	int N, M, i, j, k;
	int near = 0, sum = 0;
	int card[MAX];

	scanf("%d%d", &N, &M); 
	for (i = 0; i < N; i++)
  {
		scanf("%d", &card[i]);
	}
	for (i = 0; i < N; i++) 
  {
		for (j = i + 1; j < N; j++)
    { 
			for (k = j + 1; k < N; k++) 
       { 
				sum = card[i] + card[j] + card[k]; 
				if (near < sum && sum <= M) 
        { 
					near = sum; 
				}
			}
		}
	}
	printf("%d", near); 
	return 0;
}
