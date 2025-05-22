#include <stdio.h>

int find_gcd(int a, int b);

int main(void)
{
    int a, b, temp, gcd;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        gcd = find_gcd(a, b);
        printf("%d\n", gcd);
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