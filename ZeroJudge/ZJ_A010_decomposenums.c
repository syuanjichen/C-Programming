#include <stdio.h>
#include <math.h>

int is_prime (int n)
{
    int i, bool_prime = 1;
    for(i = 2 ; i <= (int)sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            bool_prime = 0;
            break;
        }
    }

    if(bool_prime == 0)
        return 0;
    else
        return 1;
}

int main(void)
{
    int number, i, prime = 2, times = 0, temp_number;

    scanf("%d", &number);

    temp_number = number;

    for(i = 2 ; i <= (int)sqrt(number) ; i++)
    {
        if(is_prime(i) == 1)
        {
            times = 0;
            while(temp_number % i == 0)
            {
                prime = i;
                temp_number = temp_number / i;
                times++;
            }
            
            if(times == 1)
                printf("%d", prime);
            else if(times == 0)
                continue;
            else
                printf("%d^%d", prime, times);

            if(temp_number != 1)    
                printf(" * ");
        }
    }

    if(temp_number == number)
        printf("%d", number);
    else if(temp_number > (int)sqrt(number))
        printf("%d", temp_number);

    return 0;
}