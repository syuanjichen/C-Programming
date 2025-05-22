#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, *poly, i;

    scanf("%d", &n);

    poly = (int *) malloc(sizeof(int) * (n + 1));

    for(i = n ; i >= 0 ; i--)
    {
        scanf("%d", &poly[i]);
        poly[i] *= i;

        if(i != 0)
            printf("%d ", poly[i]);
    }

    printf("\n");

    return 0;
}