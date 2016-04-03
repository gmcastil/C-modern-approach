#include <stdio.h>

#define PI 3.14159264f

int main(void) {
    float radius = 10.0f;
    float volume;

    volume = (4.0f / 3.0f) * PI * radius * radius;
    printf("Volume of a sphere of radius %.1f is %.1f meters cubed.\n",
           radius, volume);

    return 0;
}

