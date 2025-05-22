//d827 - Buying Pencils
/*Definition: 1 pencil = $5, 1 dozen of pencils = $50
Input: n for the number of classmates
Output: the minimum cost
Sample Input:42
Sample Output:180, for 42=3*12+6, 50*3+5*6=180

Solution:
Step 1: Input n
Step 2: Formula: cost=50*(n/12)+5*(n%12)
Step 3: Output the cost
*/

#include <stdio.h>

int main()
{
    int n,cost;
    scanf("%d",&n);
    cost=50*(n/12)+5*(n%12);
    printf("%d\n",cost);

    return 0;
}