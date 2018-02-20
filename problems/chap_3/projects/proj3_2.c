#include <stdio.h>

int main(void) {

     int quantity;
     float price;

     int day;
     int month;
     int year;

     printf("Enter item number: ");
     scanf("%d", &quantity);
     printf("Enter unit price: ");
     scanf("%f", &price);
     printf("Enter purchase date (mm/dd/yyyy): ");
     scanf("%d/%d/%d", &month, &day, &year);
     printf("\n");
     printf("Item\t\t\tUnit\t\t\tPurchase\n");
     printf("\t\t\tPrice\t\t\tDate\n");
     printf("%-d\t\t\t$%7.2f\t\t%02d/%02d/%d\n",
            quantity, price, month, day, year);

}
