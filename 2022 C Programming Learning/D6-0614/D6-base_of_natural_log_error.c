/* Find the term of the series of e less than \epsilon */

#include <stdio.h>

int main(void)
{
    double term_n = 1.0,e = 1.0,epsilon;
    int i = 1;

    printf("This program approaches e by series.\n");
    printf("Enter the error of the series: ");
    scanf("%lf",&epsilon);

    while(term_n >= epsilon)
    {
        term_n = term_n / i;
        e = e + term_n;
        i++;
    }

    printf("e = %lf, error = %lf, using %d terms.\n",e,epsilon,i);

    return 0;
}