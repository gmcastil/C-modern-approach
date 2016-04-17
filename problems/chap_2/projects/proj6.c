#include <stdio.h>

int main(void) {
    float x = 0.0f;
    float result;

    printf("Enter a value for 'x': ");
    scanf("%f", &x);
    result = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("The value for f(%f) is %f\n", x, result);

    return 0;
}
