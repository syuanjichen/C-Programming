//d058 - SGN function in Basic
/*
    Rule: if n>0, return 1
          if n=0, return 0
          if n<0, return -1
*/

#include <stdio.h>

int SGN(int n)
{
    if(n>0)
        return 1;
    else if (n==0)
        return 0;
    else
        return -1;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n",SGN(n));

    return 0;
}