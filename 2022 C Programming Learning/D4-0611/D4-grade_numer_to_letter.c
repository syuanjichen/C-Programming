/* Convert numerical grades to letter ones */

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d",&grade);
    
    if(0 <= grade && grade <= 100)
    {
        printf("Letter grade: ");

        switch(grade/10)
        {
            case 9:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 6:
                printf("D\n");
                break;
            default:
                printf("F\n");
                break;
        }
    }
    else
    {
        printf("Invalid Input!\n");
    }
    
    return 0;
}