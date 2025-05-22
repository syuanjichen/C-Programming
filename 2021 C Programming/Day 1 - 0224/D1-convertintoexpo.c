//Day 1 - Review: Convert Number to Exponential Form
#include <stdio.h>

int main()
{
    float a,b,c,d;
    a=-96.43f;
    b=1974.56f;
    c=0.01234f;
    d=0.000432f;

    printf("a=%.2f=%e\n",a,a);
    printf("b=%.2f=%e\n",b,b);
    printf("c=%.5f=%e\n",c,c);
    printf("d=%.6f=%e\n",d,d);

    return 0;
}