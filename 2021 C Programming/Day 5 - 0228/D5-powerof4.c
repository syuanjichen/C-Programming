//Day 5 - Whether a number is a power of four
#include <stdio.h>
#include <stdbool.h>

bool isPowerofTwo(int c)
{
    while(c>1)
    {
        if(c%4==0)
            c=c/4;
        else
            break;
    }

    if(c==1)
        return true;
    else
        return false;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",isPowerofTwo(n));

    return 0;
}