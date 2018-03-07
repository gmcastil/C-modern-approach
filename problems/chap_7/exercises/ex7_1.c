#include <stdio.h>

int main(void) {

     unsigned int i;

     // A leading 0 yields a number in octal
     i = 077;
     printf("%u is 63\n", i);

     // The other two are just in hex
     i = 0x77;
     printf("0x%x is 0x77\n", i);

     // And case doesn't matter
     i = 0XABC;
     printf("0X%x is 2748\n", i);

}
