//d507 - Judge Triangles
/*
    Sample Input 1: 3 4 5
    Sample Output 1: right triangle

    Sample Input 2: 3 4 6
    Sample Output 2: obtuse triangle
*/

/*Solution
    Step 1: Input 3 numbers (a b c)
    Step 2: Sort the numbers from small to big
    Step 3: If a+b>c && |a-b|<c, then execute step 4
    Step 4: If a^2+b^2>c^2, then print "acute triangle"
            else if a^2+b^2=c^2, then print "right triangle"
            else print "obtuse triangle"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3],i,j,temp;
    scanf("%d %d %d",&nums[0],&nums[1],&nums[2]);

    for(i=0;i<3;i++)
    {
        for(j=i;j<2;j++)
        {
            if(*(nums+j)>*(nums+j+1))
            {
                temp=*(nums+j);
                *(nums+j)=*(nums+j+1);
                *(nums+j+1)=temp;
            }
        }
    }

    if(nums[0]+nums[1]>nums[2] && abs(nums[0]-nums[1])<nums[2])
    {
        if(nums[0]*nums[0]+nums[1]*nums[1]>nums[2]*nums[2])
            printf("acute triangle\n");
        else if(nums[0]*nums[0]+nums[1]*nums[1]==nums[2]*nums[2])
            printf("right triangle\n");
        else
            printf("obtuse triangle\n");
    }

    return 0;
}