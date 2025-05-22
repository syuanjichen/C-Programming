//Day 2 - Find GCD between 2 numbers
#include <stdio.h>

int main()
{
    int a,b,i,gcd=1;
    scanf("%d %d",&a,&b);

    for(i=2;i<=a && i<=b;i++)
        if(a%i==0 && b%i==0)
            gcd=i;
    
    printf("%d\n",gcd);
    return 0;
}