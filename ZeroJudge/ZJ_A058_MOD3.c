#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, *num, mod3_1 = 0, mod3_2 = 0, mod3_0 = 0, i;

    scanf("%d", &n);

    num = (int *) malloc(n * sizeof(int));

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &num[i]);

        if(num[i] % 3 == 0)
            mod3_0++;
        else if(num[i] % 3 == 1)
            mod3_1++;
        else
            mod3_2++;
    }

    printf("%d %d %d\n", mod3_0, mod3_1, mod3_2);

    return 0;
}