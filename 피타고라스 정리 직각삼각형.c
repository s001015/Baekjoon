#include<stdio.h>

int main(void)
{
   int A, B, C;

   for (A = 1; A <= 100; A++)
      for (B = 1; B <= 100; B++)
         for (C = 1; C <= 100; C++)
            if ((A * A + B * B) == C * C);
   printf("%d %d %d\n", A, B, C);

   return 0;
}
