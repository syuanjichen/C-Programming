//Day 5 - Calculate the value of sqrt(x)
#include <stdio.h>

int mysqrt(int x)
{
    int i=1;
    while(i*i<=x)
        i++;

    return i-1;
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",mysqrt(x));

    return 0;
}