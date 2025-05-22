//Day 5 - Reverse still same?
#include <stdio.h>

int main()
{
    int i=0,leng=0,count=0;
    char a[1000],b[1000];
    scanf("%s",&a);
    while(a[i]!='\0')
    {
        leng++;
        i++;
    }

    for(i=0;i<leng;i++)
        b[leng-i-1]=a[i];
    
    for(i=0;i<leng;i++)
        if(a[i]==b[i])
            count++;
    
    if(count==leng)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}