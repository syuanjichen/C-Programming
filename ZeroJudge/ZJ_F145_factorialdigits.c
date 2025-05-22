#include <stdio.h>
#include <math.h>

// g(n) = f(n) * f(n - 1) * ... * f(2) * f(1)
// f(n) = n! * (n - 1)! * (n - 2)! * ... * 2! * 1!
// log[f(n)] = log(n) + 2log(n - 1) + 3log(n - 2) + 4log(n - 3) + ... + (n - 2)log(3) + (n - 1)log(2)
// log[g(n)] = log[f(n)] + log[f(n - 1)] + ... + log[f(2)] + log[f(1)]
// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1
// 1 3 6 10 15

long double digit_f(long long int n)
{
    long long int i;
    long double digit = 0.0, multiply;

    for(i = 1 ; i <= n ; i++)
    {
        multiply = 0.5 * i * (i + 1);
        digit += multiply * log10(n - i + 1);
    }

    return digit;
}

int main(void)
{
    long long int n;
    int i, times;
    scanf("%d", &times);

    for(i = 1 ; i <= times ; i++)
    {
        scanf("%lld", &n);

        printf("%lld\n", (long long)(digit_f(n) + 1));
    }

    return 0;
}