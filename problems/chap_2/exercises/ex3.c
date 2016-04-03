#include <stdio.h>

int main(void) {
    int height = 8;
    int length = 12;
    int width = 10;
    int volume;

    volume = height * length * width;

    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("Volume (cu. in.): %d\n", volume);
    printf("Dimensional weight (lbs): %d\n", (volume + 165) / 166);

    return 0;
}

