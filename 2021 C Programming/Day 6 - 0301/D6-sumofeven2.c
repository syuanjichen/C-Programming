//Day 6 - Summation of Even Numbers
#include <stdio.h>

int main()
{
    int a,b,sum=0,temp;
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }

    if(a%2!=0)
        a++;
    
    if(b%2!=0)
        b--;

    sum=(a+b)*((b-a+2)/2)/2;

    printf("%d",sum);

    return 0;
}