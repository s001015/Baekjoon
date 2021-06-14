#include <stdio.h>

int main(void)
{
	int L, t;

	scanf("%d", &L);
	t = L / 5;
	if (L % 5 == 0) printf("%d", t);
	else printf("%d", t + 1);

	return 0;
}
