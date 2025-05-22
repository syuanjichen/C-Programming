#include <stdio.h>
#include <stdlib.h>

int Mer(int n)
{
    int count=0,i,pro=1;
    do
    {
        pro=pro*2;
        for(i=2;i<=(pro/2);i++)
        {
            if((pro-1)/i==0)
                count=count+0;
        count++;
        printf("No. %d Mersenne prime is %d.\n",count,pro-1);
        }
    }   while(count<n);
    return 0;
}

int main()
{
    int n;
    printf("Give me a positive integer n.\n");
    scanf("%d",&n);
    Mer(n);
    printf("Program ended.\n");
    system("pause");
    return 0;
}