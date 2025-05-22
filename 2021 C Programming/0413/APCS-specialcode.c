//APCS Question: Special Code
/*Input: 1st Line: n (1<=n<=4) for lines
         the followings contain 4 numbers with "space"
    Define:
    (1)A=0101
    (2)B=0111
    (3)C=0010
    (4)D=1101
    (5)E=1000
    (6)F=1100
*/

//Sample Input : 2, then (0 0 1 0) and (1 1 0 0) (Inputs are guaranteed)
//Output:CF, for (0 0 1 0)=C and (1 1 0 0)=F
//Output format: Characters should be on the same line

/*Solution
    Step 1: input n for lines
    Step 2: create an array for input (e.g., input[4])
            create an array for output (output[4], in str)
    Step 3: input the array using for loop
    Step 4: Define the characters using if-else comparison
            Then assign the character to the output string
    Step 5: Output the string
*/

#include <stdio.h>

int main()
{
    int i,n,input[4];
    char str[4];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&input[0],&input[1],&input[2],&input[3]);
        if(input[0]==0)
        {
            if(input[1]==0)
                str[i]='C';
            else
            {
                if(input[2]==0)
                    str[i]='A';
                else
                    str[i]='B';
            }
        }
        else
        {
            if(input[1]==0)
                str[i]='E';
            else
            {
                if(input[3]==0)
                    str[i]='F';
                else
                    str[i]='D';
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%c",str[i]);
        
    printf("\n");
    return 0;
}