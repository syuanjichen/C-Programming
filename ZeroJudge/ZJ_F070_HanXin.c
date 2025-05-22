#include <stdio.h>

int main(void)
{
    long long int a1, a2, a3, b1, b2, b3, c1, c2, c3, lcm, constant, answer;
    int i;

    scanf("%lld %lld %lld %lld %lld %lld", &a1, &b1, &a2, &b2, &a3, &b3);

    c1 = a2 * a3; //117
    c2 = a1 * a3; //91
    c3 = a1 * a2; //63

    i = c1;
    while((c1) % a1 != 1)
    {
        c1 += i;
    }

    i = c2;
    while((c2) % a2 != 1)
    {
        c2 += i;
    }

    i = c3;
    while((c3) % a3 != 1)
    {
        c3 += i;
    }

    lcm = a1 * a2 * a3;
    constant = b1 * c1 + b2 * c2 + b3 * c3;

    if(lcm > constant)
        answer = constant;
    else
    {
        while(constant > 0)
        {
            constant = constant - lcm;
        }

        answer = constant + lcm;
    }

    printf("%lld\n", answer);

    return 0;

}