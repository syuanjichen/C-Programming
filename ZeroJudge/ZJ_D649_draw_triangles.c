#include <stdio.h>

int main(void)
{
    int n, i, j, pos;

    while(scanf("%d", &n) != EOF)
    {
        if(n == 0)
            break;

        for(i = 1 ; i <= n ; i++)
        {
            pos = n - i;

            for(j = 1 ; j <= n ; j++)
            {
                if(j <= pos)
                    printf("_");
                else
                    printf("+");
            }

            printf("\n");
        }
    }

    return 0;
}