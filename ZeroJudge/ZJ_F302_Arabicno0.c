#include <stdio.h>
#include <string.h>

int power(int x, int n)
{
    if(n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

int main(void)
{
    char num[100];

    fgets(num, 100, stdin);

    int i, sum = 0, len;

    len = strlen(num);

    //printf("%d\n", len);

    for(i = 0 ; i < len - 1 ; i++)
    {
        sum += (num[i] - 48) * power(9, len - 2 - i);
    }

    printf("%d\n", sum);

    return 0;
}