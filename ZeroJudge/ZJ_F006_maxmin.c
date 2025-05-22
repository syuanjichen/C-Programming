#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *student, n, i, j, temp_score;

    scanf("%d", &n);

    student = (int *) malloc(sizeof(int) * n);

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&student[i]);
    }

    for(i = n - 1 ; i >= 0 ; i--)
    {
        for(j = 0 ; j < i ; j++)
        {
            if(student[j] < student[j + 1])
            {
                temp_score = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp_score;
            }
        }
    }

    printf("%d %d\n", student[0], student[n - 1]);

    return 0;
}