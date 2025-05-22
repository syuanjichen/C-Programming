//Day 1 - Review: Find roots of f(x)=ax^2+bx+c
#include <stdio.h>
#include <math.h>

double rootD(double a, double b, double c)
{
    return b*b-4*a*c;
}

int main()
{
    double a,b,c;
    printf("Input a,b and c of ax^2+bx+c=0.\n");
    scanf("%lf,%lf,%lf",&a,&b,&c);

    double x1,x2,root;
    root=rootD(a,b,c);
    if(root>=0)
    {
        x1=(-b-sqrt(root))/(2*a);
        x2=(-b+sqrt(root))/(2*a);
        printf("x1 = %.4lf\n",x1);
        printf("x2 = %.4lf\n",x2);
    }
    else
        printf("No real number roots.\n");
    
    return 0;
}

