#include<stdio.h>
#include<math.h>

int main(void)
{
    int l, h, w;
    scanf("%d %d %d", &l, &h, &w);
    double A = l / sqrt(h*h + w*w);
    printf("%d %d", (int)(h * A), (int)(w * A));
    return 0;
}
