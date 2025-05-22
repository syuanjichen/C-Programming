//Day 5 - Sum of even numbers in [a,b]
#include <stdio.h>

int main()
{
    int i,a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
        if(i%2==0)
            sum+=i;

    printf("%d",sum);

    return 0;
}