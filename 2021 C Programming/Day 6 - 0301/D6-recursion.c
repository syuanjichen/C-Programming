//Day 6 - A Recursion Function
#include <stdio.h>

int f(int n)
{
    if(n==1)
        return 1;
    else if(n%2==0)
        return f(n/2);
    else
        return f(n-1)+f(n+1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));

    return 0;
}