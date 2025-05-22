#include <stdio.h>

int main(void)
{
    int n, i;
    char arr[6];

    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++)
    {
        scanf("%s", arr);
        if(arr[3] == 0)
        {
            if(arr == "one")
            {
                printf("1\n");
                continue;
            }
            else if(arr == "two")
            {
                printf("2\n");
                continue;
            }

            if(arr[0] == 'o' && arr[1] == 'n')
            {
                printf("1\n");
                continue;
            }
            else if(arr[0] == 't' && arr[1] == 'w')
            {
                printf("2\n");
                continue;
            }
            
            if(arr[0] == 'o' && arr[2] == 'e')
            {
                printf("1\n");
                continue;
            }
            else if(arr[0] == 't' && arr[2] == 'o')
            {
                printf("2\n");
                continue;
            }
            
            if(arr[1] == 'n' && arr[2] == 'e')
            {
                printf("1\n");
                continue;
            }
            else if(arr[1] == 'w' && arr[2] == 'o')
            {
                printf("2\n");
                continue;
            }
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}