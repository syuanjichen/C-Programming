#include <stdio.h>

int main(void)
{
    int depth, width, height, volume, surface_area;

    scanf("%d %d %d", &height, &width, &depth);

    surface_area = 2 * (height * width + height * depth + width * depth);
    volume = height * width * depth;

    printf("%d\n%d\n", surface_area, volume);

    return 0;
}