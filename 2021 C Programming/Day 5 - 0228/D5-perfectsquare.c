//Day 5 - Distinguish a perfect square number
#include <stdio.h>
#include <stdbool.h>

bool isperfectsquare(int x)
{
    int i=1;
    while(i*i<=x)
    {
        i++;
    }

    if((i-1)*(i-1)==x)
            return true;
        else
            return false;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",isperfectsquare(n));

    return 0;
}