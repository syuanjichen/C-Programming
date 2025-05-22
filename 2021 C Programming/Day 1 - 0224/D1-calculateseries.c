//Day 1 - Review: The sum of Series
#include <stdio.h>

int main()
{
    int sum=0,k,n,i;
    printf("Input Initial Value and End Value.\n");
    scanf("%d,%d",&k,&n);

    for(i=k;i<=n;i++)
        sum+=i;

    printf("Sum(%d to %d)=%d\n",k,n,sum);
    return 0;
}