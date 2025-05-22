/* Change the format of phone numbers */

#include <stdio.h>

int main(void)
{
    int region_code,first_code,second_code;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&region_code,&first_code,&second_code);

    printf("%.3d.%.3d.%.4d\n",region_code,first_code,second_code);

    return 0;
    
}