#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i, value_0, value_1;
    double percent;

    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++)
    {
        scanf("%d %d", &value_0, &value_1);

        percent = 100.00 * (double)(value_1 - value_0) / value_0;

        if(percent >= 10.000 || percent <= -7.000)
        {
            if(percent > 0)
                percent += 0.0000001;
            else if(percent < 0)
                percent -= 0.0000001;

            printf("%6.2lf%% dispose\n", percent);
        }
        else
        {
            if(percent > 0)
                percent += 0.0000001;
            else if(percent < 0)
                percent -= 0.0000001;

            printf("%6.2lf%% keep\n", percent);
        }
    }

    return 0;
}