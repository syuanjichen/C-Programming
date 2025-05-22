#include <stdio.h>

int Circles(char number[], int numbersize)
{
    int i,sum=0;
    for(i=0;number[i]!='\0';i++)
    {
        if(number[i]=='0')
            sum=sum+1;
        else if(number[i]=='6')
            sum=sum+1;
        else if(number[i]=='8')
            sum=sum+2;
        else if(number[i]=='9')
            sum=sum+1;
        else
            continue;
    }

    return sum;
}

int main()
{
    char number[10];
    
    while(scanf("%s",&number)!=EOF)
        printf("%d\n",Circles(number,10));

    return 0;
}