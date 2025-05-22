//a104 - Arrange Numbers (From smallest to biggest)
//Input: n for the amount of numbers
//then input n numbers
//Sample: 6, then (7,9,0,4,1,8)
//Output:(0,1,4,7,8,9)

/*Solution:
    Step 1: input n (integer)
    Step 2: input n numbers (integer) 
            (Make use of malloc(), include <stdlib.h>)
    Step 3: Compare the 1st number with the next one (using double for loop)
            If smaller or equal, then go to the next one
            If bigger, switch them
    Step 4: Output the arranged array
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,*num,temp;

    while(scanf("%d",&n)!=EOF)
    {
        num=(int *) malloc(n*sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",(num+i));

        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(*(num+j)>*(num+j+1))
                {
                    temp=*(num+j);
                    *(num+j)=*(num+j+1);
                    *(num+j+1)=temp;
                }
            }
        }

        for(i=0;i<n;i++)
            printf("%d ",*(num+i));

        printf("\n");
    }
    
    return 0;
}