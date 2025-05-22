#include <stdio.h>

int virus(int n)
{
    if(n == 1)
        return 1;
    else
        return virus(n - 1) + n * n - n + 1;
}

int main(void)
{
    int n, virus_count;

    scanf("%d", &n);

    virus_count = virus(n);

    printf("%d\n", virus_count);

    return 0;
}