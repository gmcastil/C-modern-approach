#define TRUE 1
#define FALSE 0
#define ENTER '\n'

#include <stdio.h>

int main(void) {

     int i;
     int n;

     char stop;

     printf("This program prints a table of squares.\n");
     // On a 64-bit machine, this blows up if i > 46,340
     printf("Enter number of entries: ");
     scanf("%d", &n);

     for (i = 1; i <= n; i++) {
          printf("%10d: %10d\n", i, i * i);
          if (i % 24 == 0) {
               printf("Press ENTER to continue...");
               while (TRUE) {
                    scanf("%c", stop);
                    if (stop == ENTER) {
                         break;
                    }
               }
          }
     }
     return 0;
}
