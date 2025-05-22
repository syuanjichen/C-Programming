//a059 - Sum of squares in an interval
//input:n for n times, then n groups of [a,b] (in different line)
//Sample:2 then [1,9], [4,20]
/*output:Case 1:14, for 1+4+9=14
         Case 2:29, for 4+9+16=29 */

/*Solution: 
    Step 1: input n for times
    Step 2: Use for loop to input [a,b]
    Step 3: Run through [a,b] using for loop
    Step 4: Designate a variable for output
    Step 5: Check their square root value
            If sqrt(c)-(int)sqrt(c)==0
                then c is added to sum
            else
                go to the next number
    Step 6: Output the sum
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i,n,a,b,countcase,sum; //Step 4. Local Variable

    scanf("%d",&n); //Step 1. (Line 8)

    for(countcase=1;countcase<=n;countcase++)
    {
        sum=0;
        scanf("%d",&a);
        scanf("%d",&b); //Step 2. (Line 9)
        for(i=a;i<=b;i++) //Step 3. (Line 10)
        {
            double checkvalue;
            checkvalue=sqrt(i)-(int)sqrt(i);
            if(checkvalue==0) //Step 5. (Line 12~16)
                sum=sum+i;
            else
                continue;
        }
        printf("Case %d:%d\n",countcase,sum);
    }

    return 0;
}
