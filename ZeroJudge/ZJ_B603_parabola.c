#include <stdio.h>

int find_gcd(int a, int b);

int main(void)
{
    int x0, y0, x1, y1, a, b, c, d, gcd, temp_b;

    while(scanf("%d %d %d %d", &x0, &y0, &x1, &y1) != EOF)
    {
        a = (x1 - x0) * (x1 - x0);
        b = y1 - y0;

        temp_b = (b > 0) ? b : -b;

        gcd = find_gcd(a, temp_b);

        a = a / gcd;
        b = b / gcd;

        c = (-2) * b * x0;
        d = b * x0 * x0 + a * y0;

        printf("%dy = %dx^2 + %dx + %d\n",a, b, c, d);
    }

    return 0;
}

int find_gcd(int a, int b)
{
    int gcd;
    while(a != 0 && b != 0)
    {
        if(a >= b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    gcd = (a == 0) ? b : a;

    return gcd;
}