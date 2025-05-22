//Problem b572 - Can he go back?
//(a,b)=hh:mm ini
//(c,d)=hh:mm end
//e time it takes to retrieve

#include <stdio.h>

int main()
{
    int i,n,H1,M1,H2,M2,M3,initime,endtime;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d",&H1,&M1,&H2,&M2,&M3);
        initime=60*H1+M1;
        endtime=60*H2+M2;
        if(endtime-initime>=M3)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}