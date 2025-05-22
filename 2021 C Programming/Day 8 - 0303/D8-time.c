//Day 8 - Time adding
#include <stdio.h>

int main()
{
    int h,m,newm,newh;
    scanf("%d %d",&h,&m);
    newh=h+2;
    newm=m+30;

    if(newm>=60)
        printf("%02d:%02d\n",(newh+1)%24,newm%60);
    else
        printf("%02d:%02d\n",newh%24,newm);

    return 0;
}