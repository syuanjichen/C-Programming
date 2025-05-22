#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[2048];
    int len, i;

    fgets(sentence, 2048, stdin);

    len = strlen(sentence);

    printf("%s", sentence);

    for(i = 1 ; i < len ; i++)
        printf("~");

    printf("\n");

    return 0;
}