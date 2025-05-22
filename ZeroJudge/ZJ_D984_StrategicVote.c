#include <stdio.h>

struct candidate
{
    char name;
    int follower;
};

int main(void)
{
    struct candidate result[3];
    char temp_name;
    int temp_follower, i, j;



    while(scanf("%d %d %d", &result[0].follower, &result[1].follower, &result[2].follower) != EOF)
    {
        result[0].name = 'A';
        result[1].name = 'B';
        result[2].name = 'C';

        for(i = 2 ; i >= 0 ; i--)
        {
            for(j = 0 ; j < i ; j++)
            {
                if(result[j].follower > result[j + 1].follower)
                {
                    temp_name = result[j].name;
                    result[j].name = result[j + 1].name;
                    result[j + 1].name = temp_name;

                    temp_follower = result[j].follower;
                    result[j].follower = result[j + 1].follower;
                    result[j + 1].follower = temp_follower;
                }
            }
        }

        if(result[2].follower - result[1].follower < result[0].follower)
            printf("%c\n", result[1].name);
        else
            printf("%c\n", result[2].name);
    }

    return 0;
}