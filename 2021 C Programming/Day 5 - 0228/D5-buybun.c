//Day 5 - buy buns
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*count,i,sum=0;
    scanf("%d",&n);
    count=(int *) malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",count+i);

    for(i=0;i<n;i++)
        sum=sum+(i+1)*(*(count+i));

    printf("%d",sum);
    return 0;
}