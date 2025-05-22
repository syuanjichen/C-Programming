//Algorithm - Linear Search
#include <stdio.h>

int main ()
{ 
    int arr[1001],i,n,count=0;
    for(i=1;i<1001;i++)
        arr[i]=i;

    printf("Search A Number:");
    scanf("%d",&n);
    if(n<1 || n>1000)
        printf("Doesn't Exist.\n");
    else
    {
        for(i=1;i<1001;i++)
        {
            count++;
            if(i!=n)
                continue;
            else
                break;
        }
        printf("Position:%d\n",i);
        printf("Operations Count: %d Times.\n",count);
    }

    return 0;
}