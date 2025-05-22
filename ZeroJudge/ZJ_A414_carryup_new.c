#include <stdio.h>
#include <math.h>

int main(void)
{
    long long int n;

    while(scanf("%lld", &n) != EOF)
    {
        if(n == 0)
            break;
        else if(n % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            if((int)log2(n) != (int)log2(n + 1))
            {
                printf("%d\n", (int)log2(n + 1));
            }
            else
            {
                printf("%d\n", (int)(log2(n ^ (n + 1)) + 1) - 1);
            }
        }
    }

    return 0;
}