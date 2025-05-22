//Algorithm - Binary Search
#include <stdio.h>

int main ()
{ 
    int arr[1001],i,n,ini=1,end_v=1000,count=1;
    for(i=1;i<1001;i++)
        arr[i]=i;

    printf("Search a Number:");
    scanf("%d",&n);

    while(arr[(ini+end_v)/2]!=n)
    {
        count++;
        if(arr[(ini+end_v)/2]<n)
            ini=(ini+end_v)/2;
        else
            end_v=(ini+end_v)/2;
    }
    
    printf("Position:%d\n",(ini+end_v)/2);
    printf("Operation Time: %d Times.\n",count);
    return 0;
}