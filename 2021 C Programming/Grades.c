/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*score,i,j,temp,min_pass=-1,max_fail=-1;
    score=(int *) malloc(n*sizeof(int));
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        scanf("%d",score+i);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(*(score+j)>*(score+j+1))
            {
                temp=*(score+j);
                *(score+j)=*(score+j+1);
                *(score+j+1)=temp;
            }
        }
    }
    
    for(i=0;i<n;i++)
        printf("%d ",*(score+i));
    
    printf("\n");
    
   
    for(i=0;i<n;i++)
    {
            
        if(*(score+i)<60)
            max_fail=*(score+i);
            
        if(*(score+i)>=60)
        {
            min_pass=*(score+i);
            break;
        }
    }
    
    
    if(max_fail==-1)
        printf("best case\n");
    else
        printf("%d\n",max_fail);
        
    if(min_pass==-1)
        printf("worst case\n");
    else
        printf("%d\n",min_pass);
        
    return 0;
}