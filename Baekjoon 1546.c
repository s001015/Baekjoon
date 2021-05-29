#include <stdio.h>
int main(void) 
{
    int num, i;
    double score[1000]
    int max = 0, avg = 0;
    scanf("%d", &num);

    for (i = 0; i < num; i++) 
    {
        scanf("%lf", &score[i]);

        if (max < score[i])
            max = score[i];
    }

    for (i = 0; i < num; i++)
    {
        score[i] = score[i] / max * 100.0;
        avg += score[i];
    }

    printf("%.2lf", (avg / (double)num));
}
