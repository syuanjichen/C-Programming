/* List Purchase Information */

#include <stdio.h>

int main(void)
{
    int item_number,year,month,day;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d",&item_number);
    printf("Enter unit price: ");
    scanf("%f",&unit_price);
    fflush(stdin);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item \t Unit \t   Purchase\n");
    printf("\t Price \t   Date\n");
    printf("%-3d \t $%7.2f  %.2d/%.2d/%d\n",item_number,unit_price,month,day,year);

    return 0;
}