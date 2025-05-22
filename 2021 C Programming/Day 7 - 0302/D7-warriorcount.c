//Day 7 - How many warriors do we and our enemy have?
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a-b<0)
            printf("%lld\n",b-a);
        else
            printf("%lld\n",a-b);
    }

    return 0;
}