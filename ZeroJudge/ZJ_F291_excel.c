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
    char column[50];
    int row = 0, i, num_alpha, num_column = 0, answer, pos;

    scanf("%s", column);

    num_alpha = strlen(column);

    //printf("%d\n", num_alpha);

    for(i = 0 ; i < num_alpha ; i++)
    {
        if(column[i] >= 48 && column[i] <= 57)
        {
            pos = i;
            break;
        }
    }

    for(i = pos ; i < num_alpha ; i++)
    {
        row += (column[i] - 48) * power(10, num_alpha - 1 - i);
    }
    
    //printf("row = %d\n", row);

    for(i = 0 ; i < pos ; i++)
    {
        num_column += (column[i] - 64) * power(26, pos - 1 - i);
    }

    //printf("column = %d\n", num_column);

    answer = row * num_column;

    printf("%d\n", answer);

    return 0;
}
