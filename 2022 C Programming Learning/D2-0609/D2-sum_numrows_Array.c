/* Sum of rows and columns of numbers using Array */

#include <stdio.h>

int main(void)
{
    int square[4][4],i,sum_Row[4],sum_Column[4],sum_Diagonal[2];

    for(i=0;i<4;i++)
    {
        printf("The 4 numbers of Row %d: ",i+1);
        scanf("%d %d %d %d",&square[i][0],&square[i][1],&square[i][2],&square[i][3]);
    }

    for(i=0;i<4;i++)
    {
        sum_Row[i] = square[i][0] + square[i][1] + square[i][2] + square[i][3];
        sum_Column[i] = square[0][i] + square[1][i] + square[2][i] + square[3][i];
        printf("%2d %2d %2d %2d\n",square[i][0],square[i][1],square[i][2],square[i][3]);
    }

    sum_Diagonal[0] = square[0][0] + square[1][1] + square[2][2] + square[3][3];
    sum_Diagonal[1] = square[0][3] + square[1][2] + square[2][1] + square[3][0];

    printf("Row sums: %2d %2d %2d %2d\n",sum_Row[0],sum_Row[1],sum_Row[2],sum_Row[3]);
    printf("Row sums: %2d %2d %2d %2d\n",sum_Column[0],sum_Column[1],sum_Column[2],sum_Column[3]);
    printf("Diagonal sums: %2d %2d\n",sum_Diagonal[0],sum_Diagonal[1]);

    return 0;
}