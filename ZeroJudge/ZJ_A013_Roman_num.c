#include <stdio.h>
#include <math.h>

int roman_to_num(char *s);
int num_to_roman(int n);

int main(void)
{
    char a1[12], a2[12], d[12] = {0};
    int num1, num2, dif, i;

    while(scanf("%s %s", &a1, &a2) != EOF)
    {
        if(a1 == "#" || a2 == "#")
            break;
        num1 = roman_to_num(a1);
        num2 = roman_to_num(a2);
        dif = num1 - num2;

        if(dif == 0)
        {
            printf("ZERO");
        }
        else
        {
            num_to_roman(dif);
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
    
    /*while(n != 0)
    {
        if(n / 1000 != 0)
        {
            times = 0;
            for(i = 0 ; i < n / 1000 ; i++)
            {
                d[address + i] = 'M';
                n = n - 1000;
                times++; 
            }

            address = address + times;
        }
        else
        {
            times = 0;
            if(n >= 900 && n <= 999)
            {
                d[address] = 'C';
                d[address + i] = 'M';
                n = n - 900;
                address = address + 2;
            }
            else
            {
                times = 0;
                if(n / 500 != 0)
                {
                    d[address + i] = 'D';
                    n = n - 500;
                    address++;
                }   
                else
                {
                    if(n >= 400 && n <= 499)
                    {
                        d[address] = 'C';
                        d[address + 1] = 'D';
                        n = n - 400;
                        address = address + 2;
                    }
                    else
                    {
                        times = 0;
                        if(n / 100 != 0)
                        {
                            for(i = 0 ; i < n / 100 ; i++)
                            {
                                d[address + i] = 'C';
                                n = n - 100;
                                times++;
                            }
                            address = address + times;
                        }
                        else
                        {
                            if(n >= 90 && n <= 99)
                            {
                                d[address] = 'X';
                                d[address + 1] = 'C';
                                n = n - 90;
                                address = address + 2;
                            }
                            else
                            {
                                times = 0;
                                if(n / 50 != 0)
                                {
                                    d[address + i] = 'L';
                                    n = n - 50;
                                    address++;
                                }
                                else
                                {
                                    if(n >= 40 && n <= 49)
                                    {
                                        d[address] = 'X';
                                        d[address + 1] = 'L';
                                        n = n - 40;
                                        address = address + 2;
                                    }
                                    else
                                    {
                                        times = 0;
                                        if(n / 10 != 0)
                                        {
                                            for(i = 0 ; i < n / 10 ; i++)
                                            {
                                                d[address + i] = 'X';
                                                n = n - 10;
                                                times++;
                                            }
                                            address = address + times;
                                        }
                                        else
                                        {
                                            if(n == 9)
                                            {
                                                d[address] = 'I';
                                                d[address + 1] = 'X';
                                                n = n - 9;
                                                address = address + 2;
                                            }
                                            else
                                            {
                                                times = 0;
                                                if(n / 5 != 0)
                                                {
                                                    d[address + i] = 'V';
                                                    n = n - 5;
                                                    address++;
                                                }
                                                else
                                                {
                                                    if(n == 4)
                                                    {
                                                        d[address] = 'I';
                                                        d[address + 1] = 'V';
                                                        n = n - 4;
                                                        address = address + 2;
                                                    }
                                                    else
                                                    {
                                                        times = 0;
                                                        for(i = 0 ; i < n ; i++)
                                                        {
                                                            d[address + i] = 'I';
                                                            n = n - 1;
                                                            times++;
                                                        }
                                                        address = address + times;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } */

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

    /*for(i = 0 ; i < 12 ; i++)
    {
        if(d[i] != '\0')
            printf("%c", d[i]);
    }*/
}