// 2024-07-07 On the train, feeling bored
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int answer = rand() % 10000, input = -1, round = 1, i, j;
    char answer_char[4], input_char[4];
    answer_char[0] = 48 + (answer / 1000);
    answer_char[1] = 48 + (answer % 1000) / 100;
    answer_char[2] = 48 + (answer % 100) / 10;
    answer_char[3] = 48 + answer % 10;
    /*
    for(i = 0 ; i < 4 ; i++)
    {
        printf("%c", *(answer_char + i));
    }
    printf("\n");
    */

    while(1)
    {
        printf("Input a 4-digit number, Round %d: ", round);
        scanf("%4d", &input);
        if(input != answer)
        {
            input_char[0] = 48 + ((input / 1000));
            input_char[1] = 48 + ((input % 1000) / 100);
            input_char[2] = 48 + ((input % 100) / 10);
            input_char[3] = 48 + (input % 10);
            int a = 0, b = 0; // Count the number of a and b

            for(i = 0 ; i < 4 ; i++)
            {
                for(j = 0 ; j < 4 ; j++)
                {
                    if(input_char[i] == answer_char[j])
                    {
                        if(i == j)
                            a++;
                        else
                            b++;
                    }
                }
            }

            printf("Input: %4d, Result: %da%db\n", input, a, b);
            round++;
            a = 0;
            b = 0;
        }
        else
        {
            printf("Answer is correct.\n");
            break;
        }
    }
    return 0;
}
