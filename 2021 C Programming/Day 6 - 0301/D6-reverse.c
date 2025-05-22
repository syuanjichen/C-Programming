//Day 6 - Reverse an array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*num;
    scanf("%d",&n);
    num=(int *) malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",num+i);

    for(i=0;i<n;i++)
        printf("%d ",*(num+n-1-i));

    printf("\n");
    return 0;
}
