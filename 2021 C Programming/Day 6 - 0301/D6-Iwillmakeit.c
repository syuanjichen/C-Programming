//Day 6 - I will make it!
#include <stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a*c>=b)
            printf("%d %d %d. I will make it!\n",a,b,c);
        else
            printf("%d %d %d. I will be late!\n",a,b,c);
    }

    return 0;
}