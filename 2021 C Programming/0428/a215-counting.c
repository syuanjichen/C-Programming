//a215 - Counting numbers
/*
    Rule: input a number n and m
    if n+(n+1)+(n+2)+...+(n+k)>m, print k+1

    Sample Input 1: 1 5
    Sample Output 1: 3 (1+2+3>5, so print 3)

    SampleInput 2: 5 10
    Sample Output 2: 2 (5+6=11, so print 2)
*/

/*Solution
    Step 1: input n and target
    Step 2: use a while loop (n, from 0)
            if sum<=target, n++, count++
    Step 3: Output count
*/

#include <stdio.h>

int main()
{
    int n,count,target,sum;
    while(scanf("%d %d",&n,&target)!=EOF)
    {   
        sum=n;
        count=1;
        if(target<0)
            printf("%d\n",count);
        else
        {
            while(sum<=target)
            {
                n++;
                sum=sum+n;
                count++;
            }

            printf("%d\n",count);
        }
        
    }

    return 0;
}