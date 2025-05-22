//Day 5 - how many even numbers are in [a,b]
#include <stdio.h>

int main()
{
    int count,a,b;
    scanf("%d %d",&a,&b);
    if(a%2!=0 && b%2!=0)
        count=(b-a)/2;
    else
        count=1+(b-a)/2;

    printf("%d",count);
    return 0;
}