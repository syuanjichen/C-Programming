#include <stdio.h>
#include <math.h>

int main(void)
{
    double T, n, duration;

    while(scanf("%lf %lf", &T, &n) != EOF)
    {
        duration = -T * log2(n);

        printf("%.3lf\n", duration);
    }
    return 0;
}