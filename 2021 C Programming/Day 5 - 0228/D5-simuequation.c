//Day 5 - Solving Two Variable Linear Equations
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    float delta,delta_x,delta_y,x,y;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

    delta=a*e-b*d;
    delta_x=c*e-b*f;
    delta_y=a*f-c*d;

    if(delta==0 && delta_x ==0 && delta_y==0)
    {
        printf("Too many\n");
    }

    else if(delta==0 && (delta_x!=0 || delta_y!=0))
    {
        printf("No answer\n");
    }
    
    else
    {
        printf("x=%.2f\n",delta_x/delta);
        printf("y=%.2f\n",delta_y/delta);
    }

    return 0;
}