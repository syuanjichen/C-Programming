//Day 1 - Review: Sum of Squared Values
#include <stdio.h>

int main()
{
    int sum=0,k,n,i;
    printf("Input Initial Value and End Value.\n");
    scanf("%d,%d",&k,&n);

    for(i=k;i<=n;i++)
        sum+=i*i;

    printf("Sum(%d^2 to %d^2) = %d\n",k,n,sum);
    return 0;
}