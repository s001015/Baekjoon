#include<stdio.h>

int main(void)
{

	long a[] = { 2, 3 };
	long b[] = { 3, 4 };
	long c[10];

	long i, j, k = 0, a_size, b_size;

	a_size = sizeof(a) / sizeof(long);
	b_size = sizeof(b) / sizeof(long);

	for (i = 0; i < a_size; i++) 
  {
		for (j = 0; j < b_size; j++)
    {
			if (a[i] == b[j])
      {
				c[k] = a[i];
				k++;
				break;
			}
		}
	}

	printf("교집합C= {");

	for (i = 0; i < k; i++)
		printf(" %d ", c[i]);
	printf("}\n");

	return 0;
}


