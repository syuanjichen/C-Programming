/* Beaufort Wind scale description */

#include <stdio.h>

int main(void)
{
    float wind_speed;

    printf("Enter the wind speed: ");
    scanf("%f",&wind_speed);

    if(0.0f < wind_speed && wind_speed < 1.0f)
        printf("Calm\n");
    else if(wind_speed < 3.0f)
        printf("Light air\n");
    else if(wind_speed < 27.0f)
        printf("Breeze\n");
    else if(wind_speed < 47.0f)
        printf("Gale\n");
    else if(wind_speed < 63.0f)
        printf("Storm\n");
    else
        printf("Hurricane\n");

    return 0;
}