#include <stdio.h>

int main(void)
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= 2 * n - 1 ; j++)
        {
            if(j < (n - i + 1) || j > (n + i - 1))
                printf("_");
            else
                printf("*");
        }

        printf("\n");
    }

    return 0;
}