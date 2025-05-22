#include <stdio.h>

int num_to_roman(int n);

int main(void)
{
    char a1[12];
    int num1, i;

    while(scanf("%d", &num1) != EOF)
    {
        if(num1 == -1)
            break;

        if(num1 == 0)
        {
            printf("ZERO\n");
        }
        else
        {
            num_to_roman(num1);
        }

        printf("\n");
    }
    return 0;
}

int power(int x, int n)
{
    if(x > 0 && n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

int num_to_roman(int n)
{
    int i, address = 0, times = 0, digits[4], j;
    char d[12] = {0};
    
    for(i = 0 ; i < 4 ; i++)
    {
        digits[i] = n / power(10, 3 - i);
        n = n % power(10, 3 - i);
    }

    for(i = 0 ; i < 4 ; i++)
    {
        if(i == 0)
        {
            for(j = 0 ; j < digits[i] ; j++)
            {
                printf("M");
            }
        }

        if(i == 1)
        {
            if(digits[i] == 9)
                printf("CM");
            else if(digits[i] == 4)
                printf("CD");
            else if(digits[i] >= 5 && digits[i] < 9)
            {
                printf("D");
                digits[i] = digits[i] - 5;
            }
            
            if(digits[i] < 4)
            {
                for(j = 0 ; j < digits[i] ; j++)
                    printf("C");
            }
        }

        if(i == 2)
        {
            if(digits[i] == 9)
                printf("XC");
            else if(digits[i] == 4)
                printf("XL");
            else if(digits[i] >= 5 && digits[i] < 9)
            {
                printf("L");
                digits[i] = digits[i] - 5;
            }
            
            if(digits[i] < 4)
            {
                for(j = 0 ; j < digits[i] ; j++)
                    printf("X");
            }
        }

        if(i == 3)
        {
            if(digits[i] == 9)
                printf("IX");
            else if(digits[i] == 4)
                printf("IV");
            else if(digits[i] >= 5 && digits[i] < 9)
            {
                printf("V");
                digits[i] = digits[i] - 5;
            }
            
            if(digits[i] < 4)
            {
                for(j = 0 ; j < digits[i] ; j++)
                    printf("I");
            }
        }
    }
}