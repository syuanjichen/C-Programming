//Day 6 - Best Name
#include <stdio.h>

int main()
{
    char name[50];
    int i,count=0;
    gets(name);

    for(i=0;i<50 && name[i]!='\0';i++)
        count++;

    for(i=0;i<count-1;i++)
        printf("%d_",name[i]);

    printf("%d",name[count-1]);

    return 0;
}
