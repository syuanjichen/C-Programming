//Day 4 - reverse a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n==0)
        printf("%d",n);

    while(n>10)
    {
        if(n%10==0)
            n=n/10;
        else    
        {    
            while(n>0)
            {    
                printf("%d",n%10);
                n=n/10;
            }
        }
    }
    printf("\n");
    return 0;
}