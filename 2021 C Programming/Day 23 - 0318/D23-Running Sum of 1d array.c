/*Day 23 - Running Sum of 1d array
sample input:[1,2,3,4]
output:[1,3,6,10]*/

#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize)
{
    int sum=0,*arrsum,i;
    arrsum=(int *) malloc(numsSize*sizeof(int));

    for(i=0;i<numsSize;i++)
    {
        sum+=*(nums+i);
        *(arrsum+i)=sum;
    }
    
    *returnSize=numsSize;
    
    return arrsum;
}