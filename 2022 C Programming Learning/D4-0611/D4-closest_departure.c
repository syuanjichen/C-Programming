/* Find the closest departure */

#include <stdio.h>

int main(void)
{
    float departure[8] = {480.0f,583.0f,679.0f,767.0f,840.0f,945.0f,1140.0f,1305.0f};
    int hour,minute,time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&minute);

    time = 60 * hour + minute;

    if(time < (departure[0] + departure[1]) / 2.0f)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if(time < (departure[1] + departure[2]) / 2.0f)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if(time < (departure[2] + departure[3]) / 2.0f)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if(time < (departure[3] + departure[4]) / 2.0f)
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if(time < (departure[4] + departure[5]) / 2.0f)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if(time < (departure[5] + departure[6]) / 2.0f)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if(time < (departure[6] + departure[7]) / 2.0f)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}