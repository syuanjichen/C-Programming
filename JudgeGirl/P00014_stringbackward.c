#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, *nums, i;

    scanf("%d", &n);

    nums = (int *) malloc(n * sizeof(int));

    if(nums != NULL)
    {
        for(i = 0; i < n ; i++)
        {
            scanf("%d", nums[i]);
        }

        for(i = n - 1 ; i >= 1 ; i--)
        {
            printf("%d ", nums[i]);
        }

        printf("%d", nums[0]);
    }

    free(nums);

    return 0;
}
