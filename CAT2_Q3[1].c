#include <stdio.h>

int main() {
    float hours, hourly_wage, gross_pay, net_pay, tax;
    
    // ask user to input for hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay
    if (hours > 40) {
        // Time and a half for overtime
        gross_pay = (40 * hourly_wage) + ((hours - 40) * hourly_wage * 1.5);
    } else {
        gross_pay = hours * hourly_wage;
    }

    // Calculate tax
    if (gross_pay <= 600) {
        tax = gross_pay * 0.15;
    } else {
        tax = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }

    // Calculate net pay
    net_pay = gross_pay - tax;

    // show results
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}