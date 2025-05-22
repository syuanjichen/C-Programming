/* Add two fractions */

#include <stdio.h>

int main(void)
{
    int nume1,deno1,nume2,deno2,nume_ans,deno_ans;

    printf("Enter 2 fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&nume1,&deno1,&nume2,&deno2);

    nume_ans = nume1 * deno2 + nume2 * deno1;
    deno_ans = deno1 * deno2;

    printf("The sum is %d/%d\n",nume_ans,deno_ans);

    return 0;
}