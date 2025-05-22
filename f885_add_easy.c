#include <stdio.h>

int main()
{
    long long int a,x,sum,n;
    int times,i;
    scanf("%d",&times);

    for(i=1;i<=times;i++)
    {
        sum=0;
        scanf("%lld %lld",&a,&x);
        n=a;
        while(sum<x)
        {
            sum=sum+n;
            n++;
        }
        printf("%lld\n",n-1);
    }

    return 0;
}