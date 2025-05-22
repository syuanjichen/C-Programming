/* Print a table of squares */

#include <stdio.h>

int main(void)
{
    int i,square = 1,odd = 3,n;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in table: ");
    scanf("%d",&n);

    for(i = 1;i <= n;i++)
    {
        printf("%10d%10d\n",i,square);
        square = square + odd;
        odd = odd + 2;
    }

    return 0;
}