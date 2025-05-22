#include <stdio.h>
#include <math.h>

long long int fixvalue(double result)
{
    if(result-(long long int)result!=0)
        return (long long int)result+1;
    else
        return (long long int)result;
}

int main()
{
    unsigned long long int root;
    long long int a,x;
    int i,times;
    double result;

    scanf("%d",&times);

    for(i=1;i<=times;i++)
    {
        scanf("%lld %lld",&a,&x);
        root=4*a*a-4*a+8*x+1;
        result=(-1+sqrt(root))/2;
        printf("%lld\n",fixvalue(result));
    }

    return 0;
}