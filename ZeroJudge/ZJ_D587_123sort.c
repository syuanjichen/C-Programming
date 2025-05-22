#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers, n, i, j, temp;

    scanf("%d", &n);

    numbers = (int *) malloc(sizeof(int) * n);

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(i = n - 1 ; i >= 0 ; i--)
    {
        for(j = 0 ; j < i ; j++)
        {
            if(numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for(i = 0 ; i < n ; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}