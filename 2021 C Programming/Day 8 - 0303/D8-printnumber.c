//Day 8 - Print out Numbers
#include <stdio.h>

int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        for(i=1;i<n;i++)
        {
            if(i%7!=0)
                printf("%d ",i);
        }

        printf("\n");
    }

    return 0;
}