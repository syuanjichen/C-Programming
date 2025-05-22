//Day 5 - Find the number that appears once
#include <stdio.h>

int singlenumber(int* num, int numsize)
{
    int i,j,temp,sum=0;

    for(i=0;i<numsize;i++)
    {
        for(j=0;j<numsize-1;j++)
        {
            if(*(num+j)>*(num+j+1))
            {
                temp=*(num+j);
                *(num+j)=*(num+j+1);
                *(num+j+1)=temp;
            }
        }
    }

    for(i=0;i<numsize;i=i+2)
        sum=sum+*(num+i);

    sum=sum*2;

    for(i=0;i<numsize;i++)
        sum=sum-*(num+i);

    return sum;
}

int main()
{
    int num[7]={14,10,12,14,12,10,8};
    printf("%d\n",singlenumber(num,7));

    return 0;
}