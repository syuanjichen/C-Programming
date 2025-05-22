#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *num, n, i, j, temp;

    while(scanf("%d", &n) != EOF)
    {
        num = (int *) malloc(sizeof(int) * n);

        for(i = 0 ; i < n ; i++)
            scanf("%d", &num[i]);

        for(i = n - 1 ; i >= 0 ; i--)
        {
            for(j = 0 ; j < i ; j++)
            {
                if((num[j] % 10) > (num[j + 1] % 10))
                {
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }

        for(j = n - 1 ; j >= 0 ; j--)
        {
            for(i = 0 ; i < n - 1 ; i++)
            {
                if(((num[i] % 10) == (num[i + 1] % 10)) && (num[i] < num[i + 1]))
                {
                    temp = num[i];
                    num[i] = num[i + 1];
                    num[i + 1] = temp;
                }
            }
        }

        for(i = 0 ; i < n ; i++)
            printf("%d ", num[i]);

        printf("\n");
    }

    return 0;
}