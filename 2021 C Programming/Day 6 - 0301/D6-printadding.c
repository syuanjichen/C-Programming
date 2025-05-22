//Day 6 - Print Adding Line
#include <stdio.h>

int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        c=a-b+3;
        b=b-3;
    }
    else
        c=a-b;

    if(c<=b)
        printf("%d+%d=%d\n",c,b,a);
    else
        printf("%d+%d=%d\n",b,c,a);

    return 0;
}