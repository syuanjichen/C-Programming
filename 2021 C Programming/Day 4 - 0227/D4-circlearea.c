//Day 4 - Circle Area Count
#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
        printf("%d\n",n*n-n+2);

    return 0;
}