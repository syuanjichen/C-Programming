//Day 3 - Calculate Score
#include <stdio.h>

int score(int count)
{
    if(count<=10)
        return 6*count;
    else if(count>=11 && count <=20)
        return 6*10+2*(count-10);
    else if(count>=21 && count<=40)
        return 6*10+2*10+1*(count-20);
    else
        return 100;
}

int main()
{
    int count;

    while(scanf("%d",&count)!=EOF)
        printf("%d\n",score(count));

    return 0;
}