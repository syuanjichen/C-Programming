#include <stdio.h>

int main(void)
{
    int side_1, side_2, side_3;

    scanf("%d %d %d", &side_1, &side_2, &side_3);

    if((side_1 + side_2 > side_3) && (side_1 + side_3 > side_2) && (side_2 + side_3 > side_1))
        printf("1\n");
    else
        printf("0\n");

    return 0;
}