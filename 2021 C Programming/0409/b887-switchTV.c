//b887 - Switching TV Channels
//How many times I should press "next channel"

#include <stdio.h>

int main()
{
    int current,goal,times;
    scanf("%d %d",&current,&goal);
    times=goal-current;
    if(times>=0)
        printf("%d\n",times);
    else
        printf("%d\n",100+times);

    return 0;
}