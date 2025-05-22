#include <stdio.h>
#include <stdlib.h>

struct score
{
    int number;
    int cs;
    int math;
    int eng;
    float avg;
};

int main(void)
{
    int n, i, j, temp_num, temp_cs, temp_math, temp_eng;
    float temp_avg;
    struct score *list;

    scanf("%d", &n);

    list = (struct score *) malloc(sizeof(struct score) * n);

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d %d %d %d", &list[i].number, &list[i].cs, &list[i].math, &list[i].eng);
        list[i].avg = (5 * list[i].cs + 3 * list[i].math + 2 * list[i].eng) / 10.0;
    }

    for(j = n - 1 ; j >= 1 ; j--)
    {
        for(i = 0 ; i < j ; i++)
        {
            if(list[i].avg < list[i + 1].avg)
            {
                temp_num = list[i].number;
                list[i].number = list[i + 1].number;
                list[i + 1].number = temp_num;

                temp_cs = list[i].cs;
                list[i].cs = list[i + 1].cs;
                list[i + 1].cs = temp_cs;

                temp_math = list[i].math;
                list[i].math = list[i + 1].math;
                list[i + 1].math = temp_math;

                temp_eng = list[i].eng;
                list[i].eng = list[i + 1].eng;
                list[i + 1].eng = temp_eng;

                temp_avg = list[i].avg;
                list[i].avg = list[i + 1].avg;
                list[i + 1].avg = temp_avg;
            }
            else if(list[i].avg == list[i + 1].avg)
            {
                if(list[i].cs < list[i + 1].cs)
                {
                    temp_num = list[i].number;
                    list[i].number = list[i + 1].number;
                    list[i + 1].number = temp_num;

                    temp_cs = list[i].cs;
                    list[i].cs = list[i + 1].cs;
                    list[i + 1].cs = temp_cs;

                    temp_math = list[i].math;
                    list[i].math = list[i + 1].math;
                    list[i + 1].math = temp_math;

                    temp_eng = list[i].eng;
                    list[i].eng = list[i + 1].eng;
                    list[i + 1].eng = temp_eng;

                    temp_avg = list[i].avg;
                    list[i].avg = list[i + 1].avg;
                    list[i + 1].avg = temp_avg;
                }
                else if(list[i].cs == list[i + 1].cs)
                {
                    if(list[i].math < list[i + 1].math)
                    {
                        temp_num = list[i].number;
                        list[i].number = list[i + 1].number;
                        list[i + 1].number = temp_num;

                        temp_cs = list[i].cs;
                        list[i].cs = list[i + 1].cs;
                        list[i + 1].cs = temp_cs;

                        temp_math = list[i].math;
                        list[i].math = list[i + 1].math;
                        list[i + 1].math = temp_math;

                        temp_eng = list[i].eng;
                        list[i].eng = list[i + 1].eng;
                        list[i + 1].eng = temp_eng;

                        temp_avg = list[i].avg;
                        list[i].avg = list[i + 1].avg;
                        list[i + 1].avg = temp_avg;
                    }
                    else if(list[i].math == list[i + 1].math)
                    {
                        if(list[i].eng < list[i + 1].eng)
                        {
                            temp_num = list[i].number;
                            list[i].number = list[i + 1].number;
                            list[i + 1].number = temp_num;

                            temp_cs = list[i].cs;
                            list[i].cs = list[i + 1].cs;
                            list[i + 1].cs = temp_cs;

                            temp_math = list[i].math;
                            list[i].math = list[i + 1].math;
                            list[i + 1].math = temp_math;

                            temp_eng = list[i].eng;
                            list[i].eng = list[i + 1].eng;
                            list[i + 1].eng = temp_eng;

                            temp_avg = list[i].avg;
                            list[i].avg = list[i + 1].avg;
                            list[i + 1].avg = temp_avg;
                        }
                        else if(list[i].eng == list[i].eng)
                        {
                            if(list[i].number > list[i + 1].number)
                            {
                                temp_num = list[i].number;
                                list[i].number = list[i + 1].number;
                                list[i + 1].number = temp_num;

                                temp_cs = list[i].cs;
                                list[i].cs = list[i + 1].cs;
                                list[i + 1].cs = temp_cs;

                                temp_math = list[i].math;
                                list[i].math = list[i + 1].math;
                                list[i + 1].math = temp_math;

                                temp_eng = list[i].eng;
                                list[i].eng = list[i + 1].eng;
                                list[i + 1].eng = temp_eng;

                                temp_avg = list[i].avg;
                                list[i].avg = list[i + 1].avg;
                                list[i + 1].avg = temp_avg;
                            }
                        }
                    }
                }
            }
        }
    }

    for(i = 0 ; i < n ; i++)
    {
        printf("%d ", list[i].number);

        if(list[i].avg - (int)list[i].avg == 0)
            printf("%d\n", (int)list[i].avg);
        else
            printf("%.1f\n", list[i].avg);
    }

    return 0;

}