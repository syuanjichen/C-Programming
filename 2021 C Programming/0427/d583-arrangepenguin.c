//d583 - Rearrange Numbers
/*
    Input: a number n (1<=n<=100000), then n numbers (from 1~n)
    Output: arranged numbers

    Sample Input 1: 6, then
    1 4 5 2 3 6

    Sample Output 1: 1 2 3 4 5 6

    Sample Input 2: 5, then
    3 4 2 5 1

    Sample Output 2: 1 2 3 4 5
*/

/*Solution
    Step 1: Create an array with 100001 elements
    Step 2: Input number n
    Step 3: use for loop to input n numbers
    Step 4: use another loop to print from 1 to n
*/

#include <stdio.h>

int main()
{
    int i,n,nums[100001];

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",nums+i);
        
        for(i=0;i<n;i++)
            printf("%d ",i+1);

        printf("\n");
    }

    return 0;

}