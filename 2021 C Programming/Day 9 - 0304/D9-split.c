//Day 9 - How many days after split
#include <stdio.h>

int main()
{
    int a,b,sum=0,day=0;
    scanf("%d %d",&a,&b);
    sum=(a+b)/a;

    while(sum>1)
    {
        sum=sum/2;
        day++;
    }

    printf("%d\n",day);

    return 0;
}