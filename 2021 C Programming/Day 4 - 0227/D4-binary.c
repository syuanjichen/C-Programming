//Day 4 - Convert into Binary
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,digit,*num,i;
    while(scanf("%d",&n)!=EOF)
    {
        digit=1+(log10(n)/log10(2));
        num=(int *) malloc(digit*sizeof(int));

        for(i=0;i<digit;i++)
        {
            *(num+digit-1-i) = n%2;
            n=n/2;
        }

        for(i=0;i<digit;i++)
            printf("%d",*(num+i));
    
        printf("\n");
    }
    return 0;
}