//a044 - Cutting Spaces
//1 plane - 2 areas
//2 planes - 4 areas

#include <stdio.h>

int areas(int n)
{
    return (n*n*n+5*n+6)/6;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",areas(n));

    return 0;
}