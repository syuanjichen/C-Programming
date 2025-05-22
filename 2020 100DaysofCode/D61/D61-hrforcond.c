/*Day 61 - HackerRank:For Loops and Conditional Statements*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
  	for(i=a;i<=b;i++)
    {
        if(i>9)
        {
            if(i%2!=0)
                printf("odd\n");
            else
                printf("even\n");
        }
        else 
        {
            switch(i)
            {
                case 1:
                    printf("one\n");
                    break;
                case 2:
                    printf("two\n");
                    break;
                case 3:
                    printf("three\n");
                    break;
                case 4:
                    printf("four\n");
                    break;
                case 5:
                    printf("five\n");
                    break;
                case 6:
                    printf("six\n");
                    break;
                case 7:
                    printf("seven\n");
                    break;
                case 8:
                    printf("eight\n");
                    break;
                case 9:
                    printf("nine\n");
                    break;
                default:
                    break;
            }
        }
    }

    return 0;
}