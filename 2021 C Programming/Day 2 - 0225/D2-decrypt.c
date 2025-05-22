//Day 2 - Decryption
#include <stdio.h>

int main()
{
    char str[1024];
    gets(str);

    int i;
    for(i=0;str[i]!='\0';i++)
        str[i]=str[i]-7;

    printf("%s",str);
    return 0;
}