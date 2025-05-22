//Day 9 - Anniversary of a Department Score
#include <stdio.h>

int main()
{
    int n,a,b;
    scanf("%d",&n);

    a=n;
    b=n;

    if(n>=2000)
        a=n-200*(n/2000);

    if(n>=1000)
        b=n-100*(n/1000);
    
    if(a<=b)
        printf("%d 0\n",a);
    else
        printf("%d 1\n",b);
        
    return 0;
}
