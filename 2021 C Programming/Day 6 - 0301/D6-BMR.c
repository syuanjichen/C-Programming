//Day 6 - BMR
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,G,A,H,W,i;
    float *value;
    value=(float *) malloc(N*sizeof(float));
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d %d %d %d",&G,&A,&H,&W);
        if(G==1)
            *(value+i)=(13.7*W)+(5.0*H)-(6.8*A)+66;
        else
            *(value+i)=(9.6*W)+(1.8*H)-(4.7*A)+655;
    }

    for(i=0;i<N;i++)
        printf("%.2f\n",*(value+i));

    return 0;

}