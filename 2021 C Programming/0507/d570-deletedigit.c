//d570 - delete digit

#include <stdio.h>
#include <math.h>

int main()
{
    int n,digits,i;
    scanf("%d",&n);

    digits=1+log10(n);

    for(i=1;i<=digits;i++)
    {
        printf("%d\n",n);
        n=n/10;
    }

    return 0;
}