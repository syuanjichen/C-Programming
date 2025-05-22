#include <stdio.h>
// I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000
// LXXXVIII, DCCCLXXXVIII, MMMDCCCLXXXVIII 4 * digits

int roman_to_num(char *s);
int num_to_roman(int n);

int main(void)
{
    char a1[12];
    int num1, i;

    while(scanf("%s", &a1) != EOF)
    {
        if(a1 == "#")
            break;
        num1 = roman_to_num(a1);

        if(num1 == 0)
        {
            printf("ZERO\n");
        }
        else
        {
            printf("%d\n", num1);
            num_to_roman(num1);
        }

        printf("\n");
    }
    return 0;
}

int roman_to_num(char *s)
{
    int i, num = 0;
    for(i = 0 ; i < 12 ; i++)
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
            if(s[i + 1] == 'M')
            {
                num = num + 990;
                i++;
            }
            else if(s[i + 1] == 'D')
            {
                num = num + 490;
                i++;
            }
            else if(s[i + 1] == 'C')
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
            if(s[i + 1] == 'M')
            {
                num = num + 999;
                i++;
            }
            else if(s[i + 1] == 'D')
            {
                num = num + 499;
                i++;
            }
            else if(s[i + 1] == 'C')
            {
                num = num + 99;
                i++;
            }
            else if(s[i + 1] == 'L')
            {
                num = num + 49;
                i++;
            }
            else if(s[i + 1] == 'X')
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