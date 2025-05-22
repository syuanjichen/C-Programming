//Day 9 - Difference Array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*A,*B;
    scanf("%d",&n);
    B=(int *) malloc(n*sizeof(int));
    A=(int *) malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",B+i);

    for(i=0;i<n;i++)
    {
        if(i==0)
            *(A+i)=*(B+i);
        else
            *(A+i)=*(B+i)-*(B+i-1);
        
        printf("%d ",*(A+i));
    }

    printf("\n");
    
    return 0;
}