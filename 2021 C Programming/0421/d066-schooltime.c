//d066 - School Time
/*
    Rule: Input two number hh & mm (hour and minute)
          If time doesn't belong to (7:30,17:00), then print ("At School")
          Else print "Off School"

    Sample Input 1: 17 00
    Sample Output 1: Off School

    Sample Input 2: 7 40
    Sample Output 2: At School
*/

/*Solution
    Step 1: Input hh & mm
    Step 2: If h<7 || h>=17, then print "Off School"
            else if h=7 && m<30, them print "Off School"
            else print "At School"
*/

#include <stdio.h>

int main()
{
    int hh,mm;
    scanf("%d %d",&hh,&mm);

    if(hh<7 || hh>=17)
        printf("Off School\n");
    else if(hh==7 && mm<30)
        printf("Off School\n");
    else
        printf("At School\n");

    return 0;
}