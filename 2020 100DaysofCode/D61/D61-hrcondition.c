/*Day 61 - HackerRank:Conditional Statements*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please type in an integer.\n");
    scanf("%d",&n);
    if(n>9)
        printf("Greater than 9\n");
    else 
    {
        switch(n)
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
                printf("six");
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

    system("pause");
    return 0;
}