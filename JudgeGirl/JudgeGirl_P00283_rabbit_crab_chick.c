#include <stdio.h>

int main(void)
{
    long long int animals, legs, tails, chick = 0, rabbit = 0, crab = 0;

    scanf("%lld %lld %lld", &animals, &legs, &tails);

    // a = x + y + z
    // l = 2x + 4y + 8z
    // t = x + y

    // z = a - t
    // l  - 8(a - t) = 2x + 4y 
    // 2t = 2x + 2y
    // 2y = l - 8a + 6t, y -> 0.5(l - 8a + 6t)
    // 2x = 2t - l + 8a - 6t = 8a - l - 4t, x ->

    crab = animals - tails;
    rabbit = (legs - 8 * animals + 6 * tails) / 2;
    chick = (8 * animals - legs - 4 * tails) / 2;

    if(chick > 0 && rabbit > 0 && crab > 0)
    {
        if((chick + rabbit + crab == animals) && (2 * chick + 4 * rabbit + 8 * crab == legs) && (chick + rabbit == tails))
        {
            printf("%lld\n", chick);
            printf("%lld\n", rabbit);
            printf("%lld\n", crab);
        }
    }
    
    return 0;
}