//Day 8 - Convert numbers
#include <stdio.h>

int main()
{
    double R,r;
    while(scanf("%lf",&r)!=EOF)
    {
        R=(9*r/5)+32;
        printf("%g\n",R);
    }
    
    return 0;
}