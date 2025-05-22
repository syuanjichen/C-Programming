#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(void)
{
    int start, end, temp, i, times, prime;

    while(scanf("%d %d", &start, &end) != EOF)
    {
        times = 0;
        if(start > end)
        {
            printf("0\n");
            continue;
        }

        for(i = start ; i <= end ; i++)
        {
            if(i == 1)
                continue;
            else if(i == 2 || i == 5)
                times++;
            else if(i % 2 != 0 && i % 10 != 5)
            {
                prime = is_prime(i);
                if(prime == 1)
                {
                    times++;
                }
            }
        }

        printf("%d\n", times);
    }

    return 0;
}

int is_prime(int n)
{
    int i, prime = 1;

    if(n == 1)
        prime = 0;
    else if(n % 2 == 0 || n % 5 == 0)
        prime = 0;
    else
    {
        for(i = 2 ; i <= (int)sqrt(n) ; i++)
        {
            if(n % i == 0)
            {
                prime = 0;
            }
        }
    }

    if(prime == 0)
        return 0;
    else
        return 1;
}