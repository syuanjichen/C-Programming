//Day 5 - Convert Fahrenheit to Celsius
#include <stdio.h>

int main()
{
    double tc,tf;
    scanf("%lf",&tf);
    printf("%.3lf\n",(5.0*(tf-32.0))/9.0);

    return 0;
}