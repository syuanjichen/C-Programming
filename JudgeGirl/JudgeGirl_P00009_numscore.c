#include <stdio.h>

int main(void)
{
    int number, score;

    scanf("%d", &number);

    if(number <= 0)
        score = -100;
    else
    {
        score = 0;

        if(number % 3 == 0)
            score = score + 3;
    
        if(number % 5 == 0)
            score = score + 5;
    
        if(100 <= number && number <= 200)
            score = score + 50;
        else
            score = score - 50;
    }
    
    printf("%d\n", score);

    return 0;
}