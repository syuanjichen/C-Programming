#include <stdio.h>

int main(void)
{
    char word[36];
    int i;

    scanf("%s", word);

    for(i = 1 ; word[i] != '\0' ; i++)
    {
        printf("%c-", word[i - 1]);
    }

    printf("%c\n", word[i - 1]);

    return 0;
}