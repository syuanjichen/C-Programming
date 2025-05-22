#include <stdio.h>

int main(void)
{
    int carrytimes, n;

    while(scanf("%d", &n) != EOF)
    {
        carrytimes = 0;

        if(n == 0)
            break;

        if(n % 2 == 0)
            printf("0\n");
        else
        {
            while(n != 0)
            {
                if(n % 2 != 0)
                {
                    n = n / 2;
                    carrytimes++;
                }
                else
                    break;
            }

            printf("%d\n", carrytimes);
        }
    }

    return 0;
}