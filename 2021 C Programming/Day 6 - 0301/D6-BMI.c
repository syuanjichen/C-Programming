//Day 6 - Calculate BMI
#include <stdio.h>

int main()
{
    float BMI;
    int weight,height;

    scanf("%d",&weight);
    scanf("%d",&height);

    BMI=weight/((height/100.0)*(height/100.0));
    printf("%.1f",BMI);

    return 0;
}