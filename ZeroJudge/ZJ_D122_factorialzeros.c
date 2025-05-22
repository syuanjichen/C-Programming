#include <stdio.h>
#include <math.h>

int power(int x, int n)
{
    if(n == 0)
        return 1;
    
    if(n >= 1)
        return x * power(x, n-1);
}

int main(void)
{
    int zeros, number, power_5, i;

    while(scanf("%d", &number) != EOF)
    {
        zeros = 0;

        power_5 = (int)(log(number)/log(5));

        for(i = power_5 ; i >= 1 ; i--)
            zeros = zeros + (number / power(5,i));

        printf("%d\n", zeros);
    }

    return 0;
}