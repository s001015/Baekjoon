#include <stdio.h>

int main(void)
{
	int num;
	double s;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) 
	{
		scanf("%lf", &s);
		printf("$%.2lf\n", s * 0.8);
	}
}
