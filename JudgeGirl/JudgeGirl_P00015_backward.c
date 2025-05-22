#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int i;

    for(i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}