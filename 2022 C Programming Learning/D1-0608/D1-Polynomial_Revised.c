/* Calculate f(x)=3x^5+2x^4-5x^3-x^2+7x-6 */

#include <stdio.h>

int main(void)
{
    float x,function_value;

    printf("The value of x = ");
    scanf("%f",&x);

    function_value = ((((3.0f * x + 2) * x - 5.0f) * x - 1.0f) * x + 7.0f) * x - 6.0f;
    
    printf("The value of f(x) is %.2f\n",function_value);

    return 0;
}