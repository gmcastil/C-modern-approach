#include <stdio.h>

#define PI 3.14159264f

int main(void) {
    float radius = 1.0f;
    float volume;

    printf("Enter the radius in meters (defaults to 1m): ");
    scanf("%f", &radius);  // If the '&' is absent, CFLAG='-Wall -O' complains
                           //   about doubles and floats
    volume = (4.0f / 3.0f) * PI * radius * radius;
    printf("Volume of a sphere of radius %.1f is %.1f meters cubed.\n",
           radius, volume);

    return 0;
}

