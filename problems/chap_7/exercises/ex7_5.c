#include <stdio.h>

int main(void) {

     unsigned int i;
     unsigned char j;

     // This should evalute
     j = 'A';
     printf("%u equals 65.\n", j);

     // Binary
     i = 0b1000001;
     printf("%u equals 65.\n", i);

     // Octal
     i = 0101;
     printf("%u equals 65.\n", i);

     // Hex
     i = 0x41;
     printf("%u equals 65.\n", i);

}
