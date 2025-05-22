/* Calculate how many digits a number contains */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number between 1 and 10000: ");
    scanf("%d",&number);

    if(0 <= number && number <= 9)
        printf("The number %d has 1 digit.\n",number);
    else if(10 <= number && number <= 99)
        printf("The number %d has 2 digits.\n",number);
    else if(100 <= number && number <= 999)
        printf("The number %d has 3 digits.\n",number);
    else
        printf("The number %d has 4 digits.\n",number);

    return 0;
}