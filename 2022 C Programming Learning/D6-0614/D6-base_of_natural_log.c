/* Find e using power series */

#include <stdio.h>

int main(void)
{
    double term_nth = 1.0,e = 1.0;
    int i,n;

    printf("This program approaches e by a series.\n");
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++)
    {
        term_nth = term_nth / i;
        e = e + term_nth;
    }

    printf("e = %.10lf using %d terms.\n",e,n);
    
    return 0;
}