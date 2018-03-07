#include <stdio.h>

int main(void) {

     unsigned char c;
     unsigned int i;

     // If you don't initialize i to some integer, you'll get random
     // values
     i = 0;
     c = 'f';

     i += c;
     printf("c is %u\n", c);
     printf("i = c + 0 is %u\n", i);

     // Extended ASCII values
     c = (2 * c) - 1;
     printf("(2 * c) - 1 is %u which should be 203, or as a char %c\n", c, c);

     // putchar()
     c = 'f';
     printf("This line should print out an 'f': ");
     putchar(c);
     printf("\n");

     // printf() - generates a warning with GCC (CFLAGS not set to anything)
     //
     // Complains that format string is not a literal string
     c = 'f';
     printf(c);

}
