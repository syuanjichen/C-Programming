//d068 - lose weight
/*
    Rule:If the input number n is greater than 50, then output n-1
         else output the same number
    Sample Input 1: 50
    Sample Output 1: 49

    Sample Input 2: 45
    Sample Output 2: 45
*/

/*Solution
    Step 1: Create a function
    Step 2: If n>50, then return n-1
            else return n
    Step 3: Input n 
    Step 4: Print the return value of n
*/

#include <stdio.h>

int Lose(int n)
{
    if(n>50)
        return n-1;
    else
        return n;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n",Lose(n));

    return 0;
}