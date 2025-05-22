//Day 6 - Area Squared
#include <stdio.h>

int main()
{
    int a,b,c;
    double s;
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2.0;
    printf("%.0lf\n",s*(s-a)*(s-b)*(s-c));

    return 0;
}