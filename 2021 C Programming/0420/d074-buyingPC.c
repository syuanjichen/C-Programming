//d074 - buying computers
/*
    Rule: input number n, then input n numbers
          find the biggest value and print out
    Sample Input 1:5
    Then: 38,42,35,41,44
    Output 1:44


    Sample Input 2:3
    Then: 53,44,51
    Output 2:51
*/

/*Solution
    Step 1: Create a malloced array (for n elements)
    Step 2: Input n
    Step 3: Use For loop to input the numbers
    Step 4: Assign the 1st element as the biggest value (max)
    Step 5: Use For loop to compare max with every other elements
    Step 6: Print the biggest value
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*nums,max;
    nums=(int *) malloc(n*sizeof(int));

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",nums+i);

    max=*nums;

    for(i=0;i<n;i++)
        if(*(nums+i)>max)
            max=*(nums+i);

    printf("%d\n",max);

    return 0;
}