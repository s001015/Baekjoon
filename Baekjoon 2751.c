#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char a[2000000];
int n;
int num;

int main(void) 
{
	scanf("%d", &n);
	while (n--) 
	{
		scanf("%d", &num);
		num += 1000000;
		a[num] = 1;
	}
	for (int i = 0; i <= 2000001; i++) 
	{
		if (a[i] == 1) printf("%d\n", i - 1000000);
	}
	return 0;
}
