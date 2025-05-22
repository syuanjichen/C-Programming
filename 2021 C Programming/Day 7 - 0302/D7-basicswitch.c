//Day 7 - Basic Usage of Switch
#include <stdio.h>

int main()
{
    long long int b,c;
    int i,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %lld %lld",&a,&b,&c);
        switch(a)
        {
            case 1:
                printf("%lld\n",b+c);
                break;
            case 2:
                printf("%lld\n",b-c);
                break;
            case 3:
                printf("%lld\n",b*c);
                break;
            case 4:
                printf("%lld\n",b/c);
                break;
        }
    }
    return 0;
}
