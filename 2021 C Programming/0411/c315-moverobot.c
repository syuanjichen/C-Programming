//c315 - move robots
//a=0 y+, a=1 x+, a=2 y-, a=3 x-

#include <stdio.h>

int main()
{
    int x=0,y=0,a,b,order_n,i;
    scanf("%d",&order_n);

    for(i=1;i<=order_n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==0)
            y=y+b;
        else if(a==1)
            x=x+b;
        else if(a==2)
            y=y-b;
        else
            x=x-b;
    }

    printf("%d %d\n",x,y);

    return 0;
}