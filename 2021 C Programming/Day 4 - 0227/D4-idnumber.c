//Day 4 - Identify Real ID number
#include <stdio.h>

int main()
{
    int sum=0,i;
    char ID[10];
    scanf("%s",ID);

    if(ID[0]>=65 && ID[0]<=72)
        ID[0]=ID[0]-55;
    else if(ID[0]==73)
        ID[0]=34;
    else if(ID[0]>=74 && ID[0]<=78)
        ID[0]=ID[0]-56;
    else if(ID[0]==79)
        ID[0]=35;
    else if(ID[0]>=80 && ID[0]<=86)
        ID[0]=ID[0]-57;
    else if(ID[0]==87)
        ID[0]=32;
    else if(ID[0]>=88 && ID[0]==89)
        ID[0]=ID[0]-58;
    else
        ID[0]=33;

    for(i=1;i<10;i++)
        ID[i]=ID[i]-48;

    sum=sum+9*(ID[0]%10)+((ID[0]/10)%10);
    for(i=1;i<10;i++)
    {
        if(i<9)
            sum+=ID[i]*(9-i);
        else
            sum+=ID[i];
    }

    if(sum%10==0)
        printf("real\n");
    else
        printf("fake\n");
    
    return 0;
}