#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row_n, *min, i, j, strength, *chains, num_of_chains;

    scanf("%d", &row_n);

    min = (int *) malloc(sizeof(int) * row_n);
    //chains = (int **) malloc(sizeof(int *) * row_n);

    for(i = 0 ; i < row_n ; i++)
    {
        scanf("%d", &num_of_chains);

        chains = (int *) malloc(sizeof(int) * num_of_chains);

        for(j = 0 ; j < num_of_chains ; j++)
        {
            scanf("%d", &chains[j]);
        }

        min[i] = chains[0];

        for(j = 1 ; j < num_of_chains ; j++)
        {
            if(chains[j] < min[i])
            {
                min[i] = chains[j];
            }
        }
    }

    strength = min[0];
    for(i = 1 ; i < row_n ; i++)
    {
        if(min[i] > strength)
        {
            strength = min[i];
        }
    }

    printf("%d\n", strength);

    free(chains);
    free(min);

    return 0;
}