#include <stdio.h>

int main(void) {

     int i, j, k;

     i = 5;
     j = 3;
     printf("%d %d\n", i / j, i % j);
     printf("1 2\n");

     i = 2;
     j = 3;
     printf("%d\n", (i + 10) % j);
     printf("0\n");

     i = 7;
     j = 8;
     k = 9;
     printf("%d\n", (i + 10) % k / j);
     printf("1\n");

     i = 1;
     j = 2;
     k = 3;
     printf("%d\n", (i + 5) % (j + 2) / k);
     printf("0\n");
}
