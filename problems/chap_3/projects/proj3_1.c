#include <stdio.h>

int main(void) {

     int day;
     int month;
     int year;

     printf("Enter a date (mm/dd/yyyy): ");
     scanf("%d/%d/%d", &month, &day, &year);
     printf("You entered the date %d%02d%02d\n", year, month, day);
}
