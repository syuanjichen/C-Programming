//Problem a216. Shu loves Ming
//f(n)=n+f(n-1)
//g(n)=f(n)+g(n-1)
//Print f(n) and g(n)

#include <stdio.h>

long long int f(long long int n)
{
    if(n>1)
        return n+f(n-1);
    else
        return 1;
}

long long int g(long long int n)
{
    if(n>1)
        return f(n)+g(n-1);
    else
        return 1;
}

int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
        printf("%lld %lld\n",f(n),g(n));
        
    return 0;
}