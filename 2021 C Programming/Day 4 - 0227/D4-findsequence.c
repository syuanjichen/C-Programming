//Day 4 - Find 5th number of the sequence
#include <stdio.h>

int print(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\n");
    return 0;
}

int main()
{
    int line,num[5],i,j;
    scanf("%d",&line);

    for(i=1;i<=line;i++)
    {
        scanf("%d %d %d %d",&num[0],&num[1],&num[2],&num[3]);

        if((num[1]-num[0]) == (num[2]-num[1]))
            num[4]=num[3]+(num[1]-num[0]);

        if((num[1]/num[0]) == (num[2]/num[1]))
            num[4]=num[3]*(num[1]/num[0]);
        
        print(num,5);
    }
    return 0;
}