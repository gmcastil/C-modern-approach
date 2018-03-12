#include <stdio.h>

int main(void) {

     // There are no more than 31 days in a month
     unsigned short days;
     days = 31;
     printf("There are no more than %u days in a month\n", days);

     // There are 365.25 days in a year
     float days_in_year;
     days_in_year = 365.25;
     printf("There are %6.2f days in a year\n", days_in_year);

     // There are 1440 minutes in a day
     unsigned short minutes;
     minutes = 1440;
     printf("There are %u minutes in a day\n", minutes);

     // There are 86,400 seconds in a day
     signed int seconds;
     seconds = 86400;
     printf("There are %u seconds in a day\n", seconds);

}
