/*

To get this to compile without errors, use the following command:

c99 -Wall -pedantic -Wextra -O0 proj7_1.c

 */

#include <stdio.h>

int main(void)
{
        double n;
        double sum = 0;

        printf("This program prints a series of integers.\n");
        printf("Enter integers (0 to terminate): ");

        scanf("%lf", &n);
        while ((int) n != 0) {
                sum += n;
                scanf("%lf", &n);
        }
        printf("The sum is: %lf\n", sum);

        return 0;
}
