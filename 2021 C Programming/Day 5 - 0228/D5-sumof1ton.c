//Day 5 - Sum of 1 to n (without multiply or loop)
#include <stdio.h>

int sum(int n)
{
    if(n>1)
        return n+sum(n-1);
    else
        return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",sum(n));

    return 0;
}