#include <stdio.h>
#include <string.h>

int main(void)
{
    char boy[50], girl[50];
    int boy_name, girl_name;

    fgets(girl, 50, stdin);
    fgets(boy, 50, stdin);

    girl_name = strlen(girl);
    boy_name = strlen(boy);

    girl[girl_name - 1] = '\0';
    boy[boy_name - 1] = '\0';

    printf("%s and %s sitting in the tree\n", girl, boy);

    return 0;
}