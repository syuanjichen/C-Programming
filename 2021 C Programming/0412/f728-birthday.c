//f728 - the probability of birthday

#include <stdio.h>

int main()
{
    int upper,lower=365,k,person;
    double percent,rate;

    while(scanf("%d",&k)!=EOF)
    {
        percent=k/100.0;
        rate=1.0;
        for(person=1;person<=365;person++)
        {
            upper=365-person+1;
            rate=rate*((double)upper/lower);
            if(1.0-rate>percent)
                break;
        }
        printf("%d\n",person);
    }

    return 0;
}