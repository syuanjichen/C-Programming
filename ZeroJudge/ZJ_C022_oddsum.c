#include <stdio.h>

int main(void)
{
    int n, i, a, b, odd_times;

    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++)
    {
        scanf("%d %d", &a, &b);

        if(a % 2 == 0)
            a++;
    
        if(b % 2 == 0)
            b--;

        odd_times = ((b - a) / 2) + 1;

        printf("Case %d: %d\n",i, odd_times * (a + b) / 2);
    }

    return 0;
}