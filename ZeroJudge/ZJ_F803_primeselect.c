#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find_prime(int n);

int main(void)
{
    int *prime, upper_limit, n, i, j, pos = 0, is_prime = 1, desired_num;

    scanf("%d %d", &upper_limit, &n);

    if(upper_limit < 10000)
        upper_limit = 10000;

    prime = (int *) malloc(sizeof(int) * upper_limit);

    for(i = 3 ; i <= 10000 ; i++)
    {
        is_prime = 1;

        for(j = 2 ; j <= (int)sqrt(i) ; j++)
        {
            if(i > 5 && (i % 3 == 0 || i % 5 == 0))
            {
                is_prime = 0;
                break;
            }

            if(i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if(is_prime == 1)
        {
            pos++;
            prime[pos - 1] = i;
        }
    }

    for(i = 10001 ; i <= upper_limit ; i++)
    {
        is_prime = 1;

        for(j = 0 ; j < pos && prime[j] <= (int)sqrt(i) ; j++)
        {
            if(i % prime[j] == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if(is_prime == 1)
        {
            pos++;
            prime[pos - 1] = i;
        }
    }

    for(i = 1 ; i <= n ; i++)
    {
        scanf("%d", &desired_num);

        int left = 0, right = pos, middle = (left + right) / 2;

        while(1)
        {
            if(prime[left] == desired_num)
            {
                printf("%d\n", left + 1);
                break;
            }
            else if(prime[right] == desired_num)
            {
                printf("%d\n", right + 1);
                break;
            }
            else if(prime[middle] == desired_num)
            {
                printf("%d\n", middle + 1);
                break;
            }
            else
            {
                while(prime[middle] != desired_num)
                {
                    if(prime[middle] > desired_num)
                    {
                        right = middle;
                        middle = (left + right) / 2;
                    }
                    else if(prime[middle] < desired_num)
                    {
                        left = middle;
                        middle = (left + right) / 2;
                    }
                }
            }
        }
    }

    return 0;
}