#include <stdio.h>

#define TAX_RATE 1.05f

int main(void) {
    float amount = 0.0f;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", amount * TAX_RATE);

    return 0;
}

