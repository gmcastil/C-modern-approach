#include <stdio.h>

int main(void) {

     // Avogadros number and the Rydberg constant for exponentials
     float avogadros;
     float rydberg;

     // Pi and gravitational constant for floating point
     float pi;
     float gravity;

     avogadros = 6.023e23;
     rydberg = 10973731.568508;
     pi = 3.141592654;
     gravity = 9.80665;

     // a
     printf("[%-8.1e]\n", avogadros);
     printf("[6.0e+23 ]\n");

     printf("[%-8.1e]\n", rydberg);
     printf("[1.1e+07 ]\n");

     // b
     printf("[%10.6e]\n", avogadros);
     printf("[6.023000e+23]\n");

     printf("[%10.6e]\n", rydberg);
     printf("[1.097373e+07]\n");

     // c
     printf("[%-8.3f]\n", pi);
     printf("[3.142   ]\n");

     printf("[%-8.3f]\n", gravity);
     printf("[9.907   ]\n");

     // d
     printf("[%6.0f]\n", pi);
     printf("[    3.]\n");

     printf("[%6.0f\n", gravity);
     printf("[    9.]\n");

}
