#include<stdio.h>

int main(void)
{
   int i;
   printf("3의 배수가 아닌 수\n");
   for (i = 0; i <= 10; i++)
   {
      if (i % 3 == 0)
         continue;
      printf("%d\n", i);
   }
   return 0;
}
