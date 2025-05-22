//Day 3 - Find Roots of ax^2+bx+c=0
#include <stdio.h>
#include <math.h>

int rootD(int a, int b, int c)
{
    return b*b-4*a*c;
}

int main()
{
    int a,b,c;
    double x1,x2;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(rootD(a,b,c)>0)
        {
            x1=(-b+sqrt(rootD(a,b,c)))/2.0*a;
            x2=(-b-sqrt(rootD(a,b,c)))/2.0*a;
            printf("Two different roots x1=%.0lf , x2=%.0lf\n",x1,x2);
        }
        else if(rootD(a,b,c)==0)
        {
            x1=(-b)/(2.0*a);
            printf("Two same roots x=%.0lf\n",x1);
        }
        else
            printf("No real root\n");
    }

    return 0;
}