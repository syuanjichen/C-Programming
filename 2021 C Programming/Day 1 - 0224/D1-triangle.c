//Day 1 - Review: Whether 3 numbers can form a triangle?
#include <stdio.h>

int main()
{
    float A[3];
    printf("Please input 3 numbers.\n");
    scanf("%f,%f,%f",&A[0],&A[1],&A[2]);

    int i,j;
    float temp;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }

    if(A[0]+A[1]>A[2])
        printf("Able to form a triangle.\n");
    else
        printf("Unable to form a triangle.\n");

    return 0;
}