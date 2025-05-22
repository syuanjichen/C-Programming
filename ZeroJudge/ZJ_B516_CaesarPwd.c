#include <stdio.h>

int main(void)
{
    char word[100];
    int n, string_length = 0, i, j;

    scanf("%d", &n);

    for(j = 1 ; j <= n ; j++)
    {
        scanf("%s", word);

        for(i = 0 ; word[i] != '\0' ; i++)
        {
            string_length++;
        }

        for(i = 0 ; i < string_length ; i++)
        {
            if(word[i] >= 65 && word[i] <= 90)
            {
                word[i] = 65 + ((word[i] - 62) % 26);
            }

            if(word[i] >= 97 && word[i] <= 122)
            {
                word[i] = 97 + ((word[i] - 94) % 26);
            }
        }

        printf("%s\n", word);
    }

    return 0;
}