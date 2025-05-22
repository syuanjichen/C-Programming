//Day 5 - Find the number of mods
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*num,count[3]={0},r;
    scanf("%d",&n);
    num=(int *) malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",num+i);
        r=*(num+i)%3;
        count[r]++;
    }

    printf("%d %d %d\n",count[0],count[1],count[2]);
    return 0;
}