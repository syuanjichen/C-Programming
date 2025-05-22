/* Sum of rows and columns of numbers */

#include <stdio.h>

int main(void)
{
    int number_11,number_12,number_13,number_14;
    int number_21,number_22,number_23,number_24;
    int number_31,number_32,number_33,number_34;
    int number_41,number_42,number_43,number_44;
    int sum_r1,sum_r2,sum_r3,sum_r4;
    int sum_c1,sum_c2,sum_c3,sum_c4;
    int sum_11223344,sum_14233241;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&number_11,&number_12,&number_13,&number_14,&number_21,&number_22,&number_23,&number_24,&number_31,&number_32,&number_33,&number_34,&number_41,&number_42,&number_43,&number_44);
    
    sum_r1 = number_11 + number_12 + number_13 + number_14;
    sum_r2 = number_21 + number_22 + number_23 + number_24;
    sum_r3 = number_31 + number_32 + number_33 + number_34;
    sum_r4 = number_41 + number_42 + number_43 + number_44;

    sum_c1 = number_11 + number_21 + number_31 + number_41; 
    sum_c2 = number_12 + number_22 + number_32 + number_42;
    sum_c3 = number_13 + number_23 + number_33 + number_43;
    sum_c4 = number_14 + number_24 + number_34 + number_44;

    sum_11223344 = number_11 + number_22 + number_33 + number_44;
    sum_14233241 = number_14 + number_23 + number_32 + number_41;

    printf("%2d %2d %2d %2d\n",number_11,number_12,number_13,number_14);
    printf("%2d %2d %2d %2d\n",number_21,number_22,number_23,number_24);
    printf("%2d %2d %2d %2d\n",number_31,number_32,number_33,number_34);
    printf("%2d %2d %2d %2d\n",number_41,number_42,number_43,number_44);
    printf("Row sums: %2d %2d %2d %2d\n",sum_r1,sum_r2,sum_r3,sum_r4);
    printf("Column sums: %2d %2d %2d %2d\n",sum_c1,sum_c2,sum_c3,sum_c4);
    printf("Diagonal sums: %2d %2d\n",sum_11223344,sum_14233241);

    return 0;
}