#include <stdio.h>

int main(void)
{
    int x1, y1, x2, y2, x3, y3, n;
    int side[3];
    int temp;

    scanf("%d", &n);

    int i, j;

    for(i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        side[0] = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        side[1] = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
        side[2] = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);

        for(j = 0; j <= 1; j++)
        {
            if(side[j] >= side[j+1])
            {
                temp = side[j+1];
                side[j+1] = side[j];
                side[j] = temp;
            }
        }

        if(side[0] > side[1])
        {
            temp = side[1];
            side[1] = side[0];
            side[0] = temp;
        }

        //printf("%d %d %d\n", side[0], side[1], side[2]);

        if(side[0]==side[1] || side[1]==side[2] || side[0]==side[2])
            printf("isosceles\n");
        else if(side[0] + side[1]< side[2])
            printf("obtuse\n");
        else if(side[0] + side[1] == side[2])
            printf("right\n");
        else
            printf("acute\n");
    }

    return 0;
}