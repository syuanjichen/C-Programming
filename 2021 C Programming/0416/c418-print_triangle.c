//c418 - Print Triangles
/*
    Sample Input : 4 (n for times)
    Output:*
           **
           ***
           ****
*/

/*Solution
    Step 1: Input an integer n
    Step 2: First for loop for rows (i=1 to i=n)
    Step 3: Print stars according to the row (j=1 to j=i)
*/

#include <stdio.h>

int main()
{
    int n,row,star;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(star=1;star<=row;star++)
            printf("*");

        printf("\n");
    }

    return 0;
}