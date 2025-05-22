#include <stdio.h>

int main(void)
{
    int a, b, c, i, points = 0;
    
    for(i = 1 ; i <= 5 ; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if(a + b > c && b + c > a && a + c > b)
            points++;
    }

    printf("%d\n", points);

    return 0;
}