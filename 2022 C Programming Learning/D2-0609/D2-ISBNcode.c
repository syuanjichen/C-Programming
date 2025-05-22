/* Show the groups of ISBN book code */

#include <stdio.h>

int main(void)
{
    int GSI_prefix,Group_identifier,Publisher_code,Item_number,Check_digit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&GSI_prefix,&Group_identifier,&Publisher_code,&Item_number,&Check_digit);

    printf("GSI prefix: %d\n",GSI_prefix);
    printf("Group identifier: %d\n",Group_identifier);
    printf("Publisher code: %d\n",Publisher_code);
    printf("Item number: %d\n",Item_number);
    printf("Check digit: %d\n",Check_digit);

    return 0;
}