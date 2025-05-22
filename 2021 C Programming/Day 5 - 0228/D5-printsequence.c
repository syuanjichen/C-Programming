//Day 5 - print sequence
#include <stdio.h>

int main()
{
    int a1,an,d,i,n;
    scanf("%d %d %d",&a1,&an,&d);
    n=1+(an-a1)/d;
    
    for(i=0;i<n;i++)
        printf("%d ",a1+i*d);

    printf("\n");
    return 0;
}