#include <stdio.h>

int main(void)
{
    int height, width, depth, press_inward, thickness;
    int s_area0, volume0, delta_area, delta_volume, s_area, volume;

    scanf("%d %d %d %d %d", &width, &depth, &height, &press_inward, &thickness);

    s_area0 = 2 * (height * width + height * depth + width * depth);
    volume0 = height * width * depth;

    delta_area = 4 * press_inward * ((width - 2 * thickness) + (height - 2 * thickness)) + 4 * press_inward * ((depth - 2 * thickness) + (height - 2 * thickness)) + 4 * press_inward * ((width - 2 * thickness) + (depth - 2 * thickness));
    delta_volume = 2 * press_inward * (height - 2 * thickness) * (width - 2 * thickness) + 2 * press_inward * (depth - 2 * thickness) * (height - 2 * thickness) + 2 * press_inward * (width - 2 * thickness) * (depth - 2 * thickness);

    s_area = s_area0 + delta_area;
    volume = volume0 - delta_volume;

    printf("%d\n", s_area);
    printf("%d\n", volume);

    return 0;
}