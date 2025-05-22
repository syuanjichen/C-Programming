//Problem b884 - Jack in the room
//Coordinates: Teacher(0,0), Jack(x,y)
//r=sqrt(x+y) yee=100-r^2

#include <stdio.h>

int distance(int x, int y)
{
    return 100-x-y;
}

int main()
{
    int i,n,x,y,yee;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        yee=distance(x,y);
        if(yee>0 && yee<=30)
            printf("sad!\n");
        else if(yee>30 && yee<=60)
            printf("hmm~~\n");
        else if(yee>60 && yee<100)
            printf("Happyyummy\n");
        else
            printf("evil!!\n");
    }

    return 0;
}
