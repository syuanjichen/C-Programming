//c717 - You can say that again
/*
    Sample Input: Do that the same.
    Sample Output: Do that the same. Do that the same.
*/

/*Solution
    Step 1: Create a string for a sentence
    Step 2: Input the sentence
    Step 3: print the sentence twice
*/

#include <stdio.h>

int main()
{
    char sentence[100];
    gets(sentence);

    printf("%s %s\n",sentence,sentence);

    return 0;
}