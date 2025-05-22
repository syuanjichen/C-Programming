//Day 5 - find max in 3
#include <stdio.h>

int main()
{
    int A[3],i,max;
    scanf("%d %d %d",&A[0],&A[1],&A[2]);

    max=A[0];
    for(i=1;i<3;i++)
        if(max<A[i])
            max=A[i];
    
    printf("%d\n",max);
    return 0;
}