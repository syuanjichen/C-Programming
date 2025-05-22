//a149 - multiply 
//input:354 output:60, because 3*5*4=60
#include <stdio.h>

int main()
{
    int times,i,n,r,result;
    scanf("%d",&times);
    for(i=1;i<=times;i++)
    {
        result=1;
        scanf("%d",&n);
        if(n==0)
            result=0;
        else
        {
            while(n>0)
            {
                r=n%10;
                result=result*r;
                n=n/10;
            }
        }
        printf("%d\n",result);
    }

    return 0;
}