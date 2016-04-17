#include <stdio.h>

int main(void) {
  float loan_value, interest_rate, monthly_payment;
  float monthly_balance;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_value);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  printf("\n");

  interest_rate = interest_rate / 100 / 12;
  monthly_balance = loan_value * (1 + interest_rate);
  monthly_balance = monthly_balance - monthly_payment;
  printf(" Balance remaining after first payment: $%.2f\n", monthly_balance);
  monthly_balance = monthly_balance * (1 + interest_rate);
  monthly_balance = monthly_balance - monthly_payment;
  printf("Balance remaining after second payment: $%.2f\n", monthly_balance);
  monthly_balance = monthly_balance * (1 + interest_rate);  
  monthly_balance = monthly_balance - monthly_payment;
  printf(" Balance remaining after third payment: $%.2f\n", monthly_balance);
}
