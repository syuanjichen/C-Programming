//f798 - fibbonaci
/*
    Input: n and m
    Find the nth fibbonaci number (mod m)
    fib[0]=1
*/

#include <stdio.h>

long long int fibbonaci(long long int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    else
        return fibbonaci(n-1)+fibbonaci(n-2); 
}

int main()
{
    long long int n,m;

    while(scanf("%lld %lld",&n,&m)!=EOF)
        printf("%lld\n",fibbonaci(n)%m);

    return 0;
}