//c419 - Bert's Triangle (2)
/*
    Input 1: 3
    Output 1: 
    __*
    _**
    ***

    Input 2: 4
    Output 2:
    ___*
    __**
    _***
    ****
*/

/*Solution
    Step 1: Input number n (for stacks)
    Step 2: Run first for loop (from i=1~i=n)
    Step 3: Run another for loop inside Step 2 (from j=i~j=n)
            If n-j>=i, print "_"
            else print "*"
*/

#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(n-j>=i)
                printf("_");
            else
                printf("*");
        }

        printf("\n");
    }

    return 0;
}