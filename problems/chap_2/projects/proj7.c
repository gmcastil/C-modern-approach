#include <stdio.h>

int main(void) {
  int dollers;
  int twenties, tens, fives, ones = 0;

  printf("Enter a doller amount: ");
  scanf("%d", &dollers);
  twenties = dollers / 20;
  dollers = dollers - (twenties * 20);
  tens = dollers / 10;
  dollers = dollers - (tens * 10);
  fives = dollers / 5;
  dollers = dollers - (fives * 5);
  ones = dollers;

  printf("\n");
  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf(" $5 bills: %d\n", fives);
  printf(" $1 bills: %d\n", ones);
}
