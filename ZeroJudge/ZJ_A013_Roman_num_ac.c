#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int roman_to_num(char *s);
int num_to_roman(int n);

int main(void)
{
    char a1[50] = {0}, a2[50] = {0};
    int num1, num2, dif, i;

    while(scanf("%s", a1) != EOF)
    {
        num1 = 0;
        num2 = 0;
        dif = 0;

        if(a1[0] == '#')
        {
            printf("\n");
            break;
        }

        scanf("%s", a2);

        num1 = roman_to_num(a1);
        num2 = roman_to_num(a2);
        dif = abs(num1 - num2);

        if(dif == 0)
        {
            printf("ZERO");
        }
        else
        {
            num_to_roman(dif);
        }

        for(i = 0 ; i < 50 ; i++)
        {
            a1[i] = 0;
            a2[i] = 0;
        }
        printf("\n");
    }

    return 0;
}

int roman_to_num(char *s)
{
    int i, num = 0;
    for(i = 0 ; i < 50 ; i++)
    {
        if(s[i] == 'M')
        {
            num = num + 1000;
        }
        else if(s[i] == 'D')
        {
            num = num + 500;
        }
        else if(s[i] == 'C')
        {
            if(s[i + 1] == 'M')
            {
                num = num + 900;
                i++;
            }
            else if(s[i + 1] == 'D')
            {
                num = num + 400;
                i++;
            }
            else
                num = num + 100;
        }
        else if(s[i] == 'L')
        {
            num = num + 50;
        }
        else if(s[i] == 'X')
        {
            if(s[i + 1] == 'C')
            {
                num = num + 90;
                i++;
            }
            else if(s[i + 1] == 'L')
            {
                num = num + 40;
                i++;
            }
            else
                num = num + 10;
        }
        else if(s[i] == 'V')
        {
            num = num + 5;
        }
        else if(s[i] == 'I')
        {
            if(s[i + 1] == 'X')
            {
                num = num + 9;
                i++;
            }
            else if(s[i + 1] == 'V')
            {
                num = num + 4;
                i++;
            }
            else
                num = num + 1;
        }
    }

    return num;
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
    int i, digits[4] = {0}, j;
    
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