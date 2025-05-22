//Day 5 - Find the password for ATM
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[7];
    int pwd[6],i;

    while(scanf("%s",str)!=EOF)
    {
        for(i=0;i<6;i++)
        {   
            pwd[i]=abs(str[i+1]-str[i]);
        }
        for(i=0;i<6;i++)
            printf("%d",pwd[i]);
        printf("\n");
    }

    printf("\n");
    return 0;   
}