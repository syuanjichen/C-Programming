//a148 - You cannot pass the test?
/*
    Rule: input a number n, then n numbers
    If the average of the numbers is bigger than 59, output "no"
    Else output "yes"

    Sample Input: 3
    60
    59
    58
    Sample Output: yes ((60+59+58)/3=59)
*/

/*Solution
    Step 1: Create a malloced array (n elements)
    Step 2: Input number n
    Step 3: Using for loop to input n numbers
    Step 4: If the sum is bigger than 59*n, then output "no"
            else output "yes"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*nums,sum;
    nums=(int *) malloc(n*sizeof(int));

    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",nums+i);
            sum=sum+*(nums+i);
        }

        if(sum>59*n)
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}