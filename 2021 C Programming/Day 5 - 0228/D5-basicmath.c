//Day 5 - Calculate +-*/
#include <stdio.h>

int main()
{
    int a,b;
    char oper;
    while(scanf("%d %c %d",&a,&oper,&b)!=EOF)
    {
        switch(oper)
        {
            case '+':
                printf("%d\n",a+b);
                break;
            case '-':
                printf("%d\n",a-b);
                break;
            case '*':
                printf("%d\n",a*b);
                break;
            case '/':
                printf("%d\n",a/b);
                break;
        }
    }
    return 0;
}