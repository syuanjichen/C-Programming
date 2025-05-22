#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **p, row, column, x, y;

    while(scanf("%d %d", &row, &column) != EOF)
    {
        p = (int **) malloc(row * sizeof(int *));
        
        for(x = 0 ; x < row ; x++)
            *(p + x) = (int *) malloc(column * sizeof(int));

        for(x = 0 ; x < row ; x++)
        {
            for(y = 0 ; y < column ; y++)
                scanf("%d", &p[x][y]);
        }

        for(y = 0 ; y < column ; y++)
        {
            for(x = 0 ; x < row ; x++)
                printf("%d ", p[x][y]);

            printf("\n");
        }

        for(x = 0 ; x < row ; x++)
            free(*(p + x));

        free(p);
    }

    return 0;
}