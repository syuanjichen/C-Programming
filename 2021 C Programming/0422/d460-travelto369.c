//d460 - travel to 369 amusement park
/*
    Rule: 
    1. 0~5 years old: free ($0)
    2. 6~11 years old: $590
    3. 12~17 years old: $790
    4. 18~59 years old: $890
    5. >60 years old: $399

    Sample Input: 15 (age)
    Sample Output: 790
*/

/*Solution
    Step 1: Input n for age
    Step 2: Use i-else to determine the cost
            if(age>=0 && age<=5)
            ...
    Step 3: Print the number
*/

#include <stdio.h>

int main()
{
    unsigned int age;
    scanf("%d",&age);

    if(age>=0 && age <=5)
        printf("0\n");
    else if(age>=6 && age<=11)
        printf("590\n");
    else if(age>=12 && age<=17)
        printf("790\n");
    else if(age>=18 && age<=59)
        printf("890\n");
    else
        printf("399\n");

    return 0;
}