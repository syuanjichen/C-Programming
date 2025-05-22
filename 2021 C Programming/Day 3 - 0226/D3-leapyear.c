//Day 3 - Identify Leap Years
#include <stdio.h>

int main()
{
    int yr;
    while(scanf("%d",&yr)!=EOF)
    {
        if((yr%4==0 && yr%100!=0) || yr%400==0)
            printf("閏年\n");
        else
            printf("平年\n");
    }
    
    return 0;
}