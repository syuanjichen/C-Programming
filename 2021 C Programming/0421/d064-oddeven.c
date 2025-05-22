//d064 - Odd or Even?
/*
    Sample Input 1: 1
    Sample Output 1: Odd (1 is an odd number)

    Sample Input 2: 4
    Sample Output 2: Even
*/

/*Solution
    Step 1: Input the Number n
    Step 2: Calculate n%2
            if n%2==0, then print "Even"
            else print "Odd"
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n%2==0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}