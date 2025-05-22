#include <stdio.h>

int main()
{
    int code, i, sum = 0, temp, times = 0, j, swap;
    char IDnum[9], alphabet[4] = {0};

    scanf("%s", IDnum);

    for(i = 0 ; i < 8 ; i++)
    {
        sum += (8 - i) * (IDnum[i] - 48);
    }

    code = IDnum[8] - 48;

    for(i = 10 ; i <= 35 ; i++)
    {
        temp = sum;
        temp = sum + ((i / 10) + ((i % 10) * 9));
        if((10 - (temp % 10)) % 10 == code)
        {
            times++;
            alphabet[times - 1] = i;
        }
    }

    for(i = 0 ; alphabet[i] != '\0' ; i++)
    {
        if(alphabet[i] >= 10 && alphabet[i] <= 17)
        {
            alphabet[i] += 55;
        }
        else if(alphabet[i] >= 18 && alphabet[i] <= 22)
        {
            alphabet[i] += 56;
        }
        else if(alphabet[i] >= 23 && alphabet[i] <= 29)
        {
            alphabet[i] += 57;
        }
        else if(alphabet[i] >= 30 && alphabet[i] <= 31)
        {
            alphabet[i] += 58;
        }
        else if(alphabet[i] == 32)
        {
            alphabet[i] = 'W';
        }
        else if(alphabet[i] == 33)
        {
            alphabet[i] = 'Z';
        }
        else if(alphabet[i] == 34)
        {
            alphabet[i] = 'I';
        }
        else
        {
            alphabet[i] = 'O';
        }
    }

    for(j = times - 1 ; j >= 0 ; j--)
    {
        for(i = 0 ; i < j ; i++)
        {
            if(alphabet[i] > alphabet[i + 1])
            {
                swap = alphabet[i];
                alphabet[i] = alphabet[i + 1];
                alphabet[i + 1] = swap;
            }
        }
    }


    printf("%s", alphabet);

    printf("\n");

    return 0;
}