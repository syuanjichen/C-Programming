#include <stdio.h>

int main(void)
{
    int num;

    scanf("%d", &num);

    if((num % 15 == 0) && (num % 7 != 0))
        printf("0\n");
    else
        printf("1\n");

    return 0;
}