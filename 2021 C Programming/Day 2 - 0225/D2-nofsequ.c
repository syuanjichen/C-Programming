//Day 2 - The nth number in a sequence
#include <stdio.h>

int main()
{
    int n;
    
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",(n*n-n+2)/2);

    return 0;
}