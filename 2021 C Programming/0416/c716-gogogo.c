//c716 - Go Go Go!
/*
    Sample Input: Jayson (a string for name)
    Sample Output: Go, Jayson, go go
*/

/*Solution
    Step 1: Create a String for name
    Step 2: Type in the name
    Step 3: print out "Go, (name), go go"  
*/

#include <stdio.h>

int main()
{
    char name[20];
    gets(name);

    printf("Go, %s, go go\n",name);

    return 0;
}