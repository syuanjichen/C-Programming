//Day 5 - Find Armstrong numbers
#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int digit=1+log10(n),i,sum=0;
    for(i=1;i<=digit;i++)
    {
        sum=sum+pow(n%10,digit);
        n=n/10;
    }

    return sum;
}

int main()
{
    int i,n1,n2,count=0,sum=0;
    scanf("%d %d",&n1,&n2);

    for(i=n1;i<=n2;i++)
    {
        if(i==armstrong(i))
        {
            printf("%d ",i);
            count++;
        }
    }

    if(count==0)
        printf("none\n");
    
    return 0;
}