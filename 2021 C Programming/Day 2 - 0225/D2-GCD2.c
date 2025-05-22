//Day 2 - Find the GCD of 2 numbers
#include <stdio.h>

int main()
{
    int a,b,r,gcd=1;
    scanf("%d %d",&a,&b);

    while(a%b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }

    if(a%b==0)
        gcd=b;

    printf("%d\n",gcd);
    return 0;
}